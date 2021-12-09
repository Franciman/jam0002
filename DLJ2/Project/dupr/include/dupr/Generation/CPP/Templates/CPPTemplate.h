#ifndef DUPR_GENERATION_CPP_TEMPLATES_CPPTEMPLATE_h
#define DUPR_GENERATION_CPP_TEMPLATES_CPPTEMPLATE_h

#include <variant>
#include <vector>
#include <string>

namespace dupr::generation::cpp::templates
{

	/*!	\class CPPTemplate
	 *
	 *	\brief Generates code for "CPPTemplate"
	 *
	 *	\details This is generated by DST.
	 *	For more information visit: https://github.com/Deruago/DeamerStringTemplate
	 */
	class CPPTemplate
	{
	public:
		enum class Type
{
Unknown,
Scope,

// User defined types
argument_,
argument_name_,
argument_type_,
file_,
function_,
function_name_,
function_prototype_,
left_angle_bracket_,
left_bracket_,
left_curly_bracket_,
return_type_,
right_angle_bracket_,
right_bracket_,
right_curly_bracket_,
statement_,


};


		enum class ScopeType
{
Unknown,

// Default
Default_,
Upper_,
Lower_,

Snake_,
Slash_,
BackSlash_,
Colon_,
DoubleColon_,

Variable_Field_,
Variable_Field_Separator_,
Function_Field_,
Function_Field_Separator_,


};


		static constexpr const char* ConvertEnumToName(::dupr::generation::cpp::templates::CPPTemplate::Type enumerationValue)
{
	switch(enumerationValue)
	{
	case ::dupr::generation::cpp::templates::CPPTemplate::Type::argument_:
{
	return "argument";
}

case ::dupr::generation::cpp::templates::CPPTemplate::Type::argument_name_:
{
	return "argument_name";
}

case ::dupr::generation::cpp::templates::CPPTemplate::Type::argument_type_:
{
	return "argument_type";
}

case ::dupr::generation::cpp::templates::CPPTemplate::Type::file_:
{
	return "file";
}

case ::dupr::generation::cpp::templates::CPPTemplate::Type::function_:
{
	return "function";
}

case ::dupr::generation::cpp::templates::CPPTemplate::Type::function_name_:
{
	return "function_name";
}

case ::dupr::generation::cpp::templates::CPPTemplate::Type::function_prototype_:
{
	return "function_prototype";
}

case ::dupr::generation::cpp::templates::CPPTemplate::Type::left_angle_bracket_:
{
	return "left_angle_bracket";
}

case ::dupr::generation::cpp::templates::CPPTemplate::Type::left_bracket_:
{
	return "left_bracket";
}

case ::dupr::generation::cpp::templates::CPPTemplate::Type::left_curly_bracket_:
{
	return "left_curly_bracket";
}

case ::dupr::generation::cpp::templates::CPPTemplate::Type::return_type_:
{
	return "return_type";
}

case ::dupr::generation::cpp::templates::CPPTemplate::Type::right_angle_bracket_:
{
	return "right_angle_bracket";
}

case ::dupr::generation::cpp::templates::CPPTemplate::Type::right_bracket_:
{
	return "right_bracket";
}

case ::dupr::generation::cpp::templates::CPPTemplate::Type::right_curly_bracket_:
{
	return "right_curly_bracket";
}

case ::dupr::generation::cpp::templates::CPPTemplate::Type::statement_:
{
	return "statement";
}


	}

	return "";
}


		
	public:
		struct VariableBase
		{
			// The value is either a string
			// or a vector of variables.
			std::variant<std::string, std::vector<VariableBase*>> value;
			bool isString = true;

			::dupr::generation::cpp::templates::CPPTemplate::Type type = ::dupr::generation::cpp::templates::CPPTemplate::Type::Unknown;

			VariableBase() : VariableBase(std::vector<VariableBase*>())
			{
			}

			virtual ~VariableBase() = default;

			VariableBase(const char* text)
			{
				isString = true;
				value = text;
			}

			VariableBase(const std::string& text)
			{
				isString = true;
				value = text;
			}

			VariableBase(std::vector<VariableBase*> variables)
			{
				isString = false;
				value = variables;
			}

			VariableBase* This()
			{
				return this;
			}

			virtual std::string GetValue()
			{
				if (isString)
				{
					return std::get<std::string>(value);
				}
				else
				{
					std::string output;
					auto& variables = std::get<std::vector<VariableBase*>>(value);
					for (auto* variable : variables)
					{
						output += variable->GetValue();
					}
					return output;
				}
			}

			std::string GetName()
			{
				return ConvertEnumToName(type);
			}

			VariableBase& operator=(const std::string& variable)
			{
				return Set(variable);
			}

			VariableBase& operator=(VariableBase* variable)
			{
				return Set(variable);
			}

			VariableBase& operator+=(VariableBase* variable)
			{
				return Add(variable);
			}

			VariableBase& operator+=(const std::string& variable)
			{
				return Add(variable);
			}

			VariableBase& Set(const std::string& variable)
			{
				value = variable;
				isString = true;

				return *this;
			}

			VariableBase& Set(VariableBase* variable)
			{
				if (variable == this)
				{
					return *this;
				}

				value = variable->value;
				isString = variable->isString;

				return *this;
			}

			VariableBase& Add(const std::string& variable)
			{
				if (isString)
				{
					auto& text = std::get<std::string>(value);
					text += variable;
					value = text;
				}
				else
				{
					auto& vector = std::get<std::vector<VariableBase*>>(value);
					vector.push_back(new VariableBase(variable));
					value = vector;
				}

				return *this;
			}

			VariableBase& Add(VariableBase* variable)
			{
				if (variable == this)
				{
					return *this;
				}

				if (isString)
				{
					// convert current -> variablebase
					// then create a vector.
					auto& currentValue = std::get<std::string>(value);
					auto* currentValueAsVariableBase = new VariableBase(currentValue);
					value = std::vector<VariableBase*>({ currentValueAsVariableBase, variable });

					isString = false;
				}
				else
				{
					auto& vector = std::get<std::vector<VariableBase*>>(value);
					vector.push_back(variable);
					value = vector;
				}

				return *this;
			}

			void Clear()
			{
				if (isString)
				{
					value = "";
				}
				else
				{
					value = std::vector<VariableBase*>();
				}
			}

			void* operator new(size_t size)
			{
				void* newVariable = ::operator new(size);
				variables_to_delete.emplace_back(static_cast<VariableBase*>(newVariable));

				return newVariable;
			}
		};

		static VariableBase* GenerateVariable(VariableBase* variable)
		{
			return variable;
		}

		
		static VariableBase* GenerateVariable(const std::string& variable)
		{
			return new VariableBase(variable);
		}

		struct VariableScope : public VariableBase
		{
			::dupr::generation::cpp::templates::CPPTemplate::ScopeType scope_type = ::dupr::generation::cpp::templates::CPPTemplate::ScopeType::Unknown;
			bool isReserved = false;

			VariableScope(::dupr::generation::cpp::templates::CPPTemplate::ScopeType scope_type_, bool isReserved_ = false) : VariableBase(), scope_type(scope_type_), isReserved(isReserved_)
			{
				type = ::dupr::generation::cpp::templates::CPPTemplate::Type::Scope;
			}

			VariableScope(const char* text, ::dupr::generation::cpp::templates::CPPTemplate::ScopeType scope_type_, bool isReserved_ = false) : VariableBase(text), scope_type(scope_type_), isReserved(isReserved_)
			{
				type = ::dupr::generation::cpp::templates::CPPTemplate::Type::Scope;
			}

			VariableScope(std::vector<VariableBase*> variable, ::dupr::generation::cpp::templates::CPPTemplate::ScopeType scope_type_, bool isReserved_ = false) : VariableBase(variable), scope_type(scope_type_), isReserved(isReserved_)
			{
				type = ::dupr::generation::cpp::templates::CPPTemplate::Type::Scope;
			}
		};
		
		struct Variable_ReservedScope_Upper : public VariableScope
		{
			VariableBase* base;
			Variable_ReservedScope_Upper(VariableBase* base_)
			: VariableScope(::dupr::generation::cpp::templates::CPPTemplate::ScopeType::Upper_, true),
			  base(base_)
			{
			}
			
			virtual std::string GetValue() override
			{
				std::string upperVariant;
				std::string currentValue = base->GetValue();

				for (const auto character : currentValue)
				{
					upperVariant += std::toupper(character);
				}

				return upperVariant;
			}
		};
		
		struct Variable_ReservedScope_Lower : public VariableScope
		{
			VariableBase* base;
			Variable_ReservedScope_Lower(VariableBase* base_)
			: VariableScope(::dupr::generation::cpp::templates::CPPTemplate::ScopeType::Lower_, true),
			  base(base_)
			{
			}
			
			virtual std::string GetValue() override
			{
				std::string lowerVariant;
				std::string currentValue = base->GetValue();

				for (const auto character : currentValue)
				{
					lowerVariant += std::tolower(character);
				}

				return lowerVariant;
			}
		};
		
		struct Variable_ReservedScope_Snake : public VariableScope
		{
			VariableBase* base;
			Variable_ReservedScope_Snake(VariableBase* base_)
			: VariableScope(::dupr::generation::cpp::templates::CPPTemplate::ScopeType::Snake_, true),
			  base(base_)
			{
			}
			
			virtual std::string GetValue() override
			{
				std::string snakeVariant;
				std::string currentValue = base->GetValue();
				
				bool lastWasNonAlpha = true;
				for (const auto character : currentValue)
				{
					if (std::isalpha(character))
					{
						snakeVariant += character;
						lastWasNonAlpha = false;
					}
					else
					{
						if (lastWasNonAlpha)
						{
							continue;
						}
						
						snakeVariant += '_';
						lastWasNonAlpha = true;
					}
				}
				
				// If it contains text
				// remove the tail
				if (!snakeVariant.empty() && lastWasNonAlpha)
				{
					snakeVariant.pop_back();
				}

				return snakeVariant;
			}
		};
		
		struct Variable_ReservedScope_Slash : public VariableScope
		{
			VariableBase* base;
			Variable_ReservedScope_Slash(VariableBase* base_)
			: VariableScope(::dupr::generation::cpp::templates::CPPTemplate::ScopeType::Slash_, true),
			  base(base_)
			{
			}
			
			virtual std::string GetValue() override
			{
				std::string slashVariant;
				std::string currentValue = base->GetValue();
				
				bool lastWasNonAlpha = true;
				for (const auto character : currentValue)
				{
					if (std::isalpha(character))
					{
						slashVariant += character;
						lastWasNonAlpha = false;
					}
					else
					{
						if (lastWasNonAlpha)
						{
							continue;
						}
						
						slashVariant += '/';
						lastWasNonAlpha = true;
					}
				}
				
				// If it contains text
				// remove the tail
				if (!slashVariant.empty() && lastWasNonAlpha)
				{
					slashVariant.pop_back();
				}

				return slashVariant;
			}
		};
		
		struct Variable_ReservedScope_DoubleColon : public VariableScope
		{
			VariableBase* base;
			Variable_ReservedScope_DoubleColon(VariableBase* base_)
			: VariableScope(::dupr::generation::cpp::templates::CPPTemplate::ScopeType::DoubleColon_, true),
			  base(base_)
			{
			}
			
			virtual std::string GetValue() override
			{
				std::string doubleColonVariant;
				std::string currentValue = base->GetValue();
				
				bool lastWasNonAlpha = true;
				for (const auto character : currentValue)
				{
					if (std::isalpha(character))
					{
						doubleColonVariant += character;
						lastWasNonAlpha = false;
					}
					else
					{
						if (lastWasNonAlpha)
						{
							continue;
						}
						
						doubleColonVariant += "::";
						lastWasNonAlpha = true;
					}
				}
				
				// If it contains text
				// remove the tail
				if (!doubleColonVariant.empty() && lastWasNonAlpha)
				{
					doubleColonVariant.pop_back();
					doubleColonVariant.pop_back();
				}

				return doubleColonVariant;
			}
		};

		struct VariableScopes : public VariableBase
		{
			// Default scopes
			VariableBase* default_ = new VariableScope(::dupr::generation::cpp::templates::CPPTemplate::ScopeType::Default_, true);
			VariableBase* upper_ = new Variable_ReservedScope_Upper(this);
			VariableBase* lower_ = new Variable_ReservedScope_Lower(this);
			
			VariableBase* snake_ = new Variable_ReservedScope_Snake(this);
			VariableBase* slash_ = new Variable_ReservedScope_Slash(this);
			VariableBase* double_colon_ = new Variable_ReservedScope_DoubleColon(this);
			
			VariableBase* variable_field_ = new VariableScope(::dupr::generation::cpp::templates::CPPTemplate::ScopeType::Variable_Field_, true);
			VariableBase* variable_field_separator_ = new VariableScope("\n", ::dupr::generation::cpp::templates::CPPTemplate::ScopeType::Variable_Field_Separator_, true);

			// Ctor
			VariableScopes() : VariableBase() {}

			VariableScopes(const char* text) : VariableBase(text) {}

			VariableScopes(const std::string& text) : VariableBase(text) {}

			VariableScopes(std::vector<VariableBase*> variables) : VariableBase(variables) {}

			// Dtor
			virtual ~VariableScopes() override = default;

			// Calls
			VariableBase* Default()
			{
				return default_;
			}
			VariableBase* Upper()
			{
				return upper_;
			}

			VariableBase* Lower()
			{
				return lower_;
			}

			VariableBase* Underscore()
			{
				return snake_;
			}

			VariableBase* Snake()
			{
				return snake_;
			}

			VariableBase* Slash()
			{
				return slash_;
			}

			VariableBase* DoubleColon()
			{
				return double_colon_;
			}

			VariableBase* Variable_Field()
			{
				return variable_field_;
			}

			VariableBase* Variable_Field_Separator()
			{
				return variable_field_separator_;
			}

			void ExpandVariableField()
			{
				// currentvalue + separator
				const auto currentValue = GetValue() + Variable_Field_Separator()->GetValue();
				*Variable_Field() += currentValue;
			}
		};

	public:
		
struct Variable_argument_ : public VariableScopes
{

static constexpr auto name = "argument_";



Variable_argument_() : VariableScopes()
{
	type = ::dupr::generation::cpp::templates::CPPTemplate::Type::argument_;
}

virtual ~Variable_argument_() override = default;

Variable_argument_(CPPTemplate* cpptemplate_, const std::vector<VariableBase*>& variables) : VariableScopes(variables)
{
type = ::dupr::generation::cpp::templates::CPPTemplate::Type::argument_;

}



Variable_argument_& operator=(const Variable_argument_& variable)
{
	if (&variable == this)
	{
		return *this;
	}

	value = variable.value;
	isString = variable.isString;

	

	return *this;
}

};

struct Variable_argument_name_ : public VariableScopes
{

static constexpr auto name = "argument_name_";



Variable_argument_name_() : VariableScopes()
{
	type = ::dupr::generation::cpp::templates::CPPTemplate::Type::argument_name_;
}

virtual ~Variable_argument_name_() override = default;

Variable_argument_name_(CPPTemplate* cpptemplate_, const std::vector<VariableBase*>& variables) : VariableScopes(variables)
{
type = ::dupr::generation::cpp::templates::CPPTemplate::Type::argument_name_;

}



Variable_argument_name_& operator=(const Variable_argument_name_& variable)
{
	if (&variable == this)
	{
		return *this;
	}

	value = variable.value;
	isString = variable.isString;

	

	return *this;
}

};

struct Variable_argument_type_ : public VariableScopes
{

static constexpr auto name = "argument_type_";



Variable_argument_type_() : VariableScopes()
{
	type = ::dupr::generation::cpp::templates::CPPTemplate::Type::argument_type_;
}

virtual ~Variable_argument_type_() override = default;

Variable_argument_type_(CPPTemplate* cpptemplate_, const std::vector<VariableBase*>& variables) : VariableScopes(variables)
{
type = ::dupr::generation::cpp::templates::CPPTemplate::Type::argument_type_;

}



Variable_argument_type_& operator=(const Variable_argument_type_& variable)
{
	if (&variable == this)
	{
		return *this;
	}

	value = variable.value;
	isString = variable.isString;

	

	return *this;
}

};

struct Variable_file_ : public VariableScopes
{

static constexpr auto name = "file_";

VariableBase* Content_ = GenerateVariable("");
VariableBase* Class_postfix_ = GenerateVariable("");
VariableBase* Extension_ = GenerateVariable("");
VariableBase* File_name_ = GenerateVariable("");
VariableBase* Namespace_ = GenerateVariable("");
VariableBase* Target_language_ = GenerateVariable("");


Variable_file_() : VariableScopes()
{
	type = ::dupr::generation::cpp::templates::CPPTemplate::Type::file_;
}

virtual ~Variable_file_() override = default;

Variable_file_(CPPTemplate* cpptemplate_, const std::vector<VariableBase*>& variables) : VariableScopes(variables)
{
type = ::dupr::generation::cpp::templates::CPPTemplate::Type::file_;
*static_cast<VariableBase*>(Content_) = VariableBase(std::vector<VariableBase*>({ GenerateVariable("#include <iostream>\n#include <vector>\n#include <map>\n#include <set>\n#include <array>\n#include <algorithm>\n#include <type_traits>\n#include <string>\n#include <memory>\n\n"), GenerateVariable(cpptemplate_->function_prototype_->Variable_Field()), GenerateVariable("\n\n"), GenerateVariable(cpptemplate_->function_->Variable_Field()) }));
Content_->type = ::dupr::generation::cpp::templates::CPPTemplate::Type::Scope;

*static_cast<VariableBase*>(Class_postfix_) = VariableBase(std::vector<VariableBase*>({  }));
Class_postfix_->type = ::dupr::generation::cpp::templates::CPPTemplate::Type::Scope;

*static_cast<VariableBase*>(Extension_) = VariableBase(std::vector<VariableBase*>({ GenerateVariable("h") }));
Extension_->type = ::dupr::generation::cpp::templates::CPPTemplate::Type::Scope;

*static_cast<VariableBase*>(File_name_) = VariableBase(std::vector<VariableBase*>({ GenerateVariable("CPP") }));
File_name_->type = ::dupr::generation::cpp::templates::CPPTemplate::Type::Scope;

*static_cast<VariableBase*>(Namespace_) = VariableBase(std::vector<VariableBase*>({ GenerateVariable("dupr::generation::cpp::templates") }));
Namespace_->type = ::dupr::generation::cpp::templates::CPPTemplate::Type::Scope;

*static_cast<VariableBase*>(Target_language_) = VariableBase(std::vector<VariableBase*>({ GenerateVariable("C++") }));
Target_language_->type = ::dupr::generation::cpp::templates::CPPTemplate::Type::Scope;


}


VariableBase* Content() const
{
	return Content_;
}

VariableBase* Class_postfix() const
{
	return Class_postfix_;
}

VariableBase* Extension() const
{
	return Extension_;
}

VariableBase* File_name() const
{
	return File_name_;
}

VariableBase* Namespace() const
{
	return Namespace_;
}

VariableBase* Target_language() const
{
	return Target_language_;
}


Variable_file_& operator=(const Variable_file_& variable)
{
	if (&variable == this)
	{
		return *this;
	}

	value = variable.value;
	isString = variable.isString;

	*Content_ = *variable.Content_;
*Class_postfix_ = *variable.Class_postfix_;
*Extension_ = *variable.Extension_;
*File_name_ = *variable.File_name_;
*Namespace_ = *variable.Namespace_;
*Target_language_ = *variable.Target_language_;


	return *this;
}

};

struct Variable_function_ : public VariableScopes
{

static constexpr auto name = "function_";



Variable_function_() : VariableScopes()
{
	type = ::dupr::generation::cpp::templates::CPPTemplate::Type::function_;
}

virtual ~Variable_function_() override = default;

Variable_function_(CPPTemplate* cpptemplate_, const std::vector<VariableBase*>& variables) : VariableScopes(variables)
{
type = ::dupr::generation::cpp::templates::CPPTemplate::Type::function_;

}



Variable_function_& operator=(const Variable_function_& variable)
{
	if (&variable == this)
	{
		return *this;
	}

	value = variable.value;
	isString = variable.isString;

	

	return *this;
}

};

struct Variable_function_name_ : public VariableScopes
{

static constexpr auto name = "function_name_";



Variable_function_name_() : VariableScopes()
{
	type = ::dupr::generation::cpp::templates::CPPTemplate::Type::function_name_;
}

virtual ~Variable_function_name_() override = default;

Variable_function_name_(CPPTemplate* cpptemplate_, const std::vector<VariableBase*>& variables) : VariableScopes(variables)
{
type = ::dupr::generation::cpp::templates::CPPTemplate::Type::function_name_;

}



Variable_function_name_& operator=(const Variable_function_name_& variable)
{
	if (&variable == this)
	{
		return *this;
	}

	value = variable.value;
	isString = variable.isString;

	

	return *this;
}

};

struct Variable_function_prototype_ : public VariableScopes
{

static constexpr auto name = "function_prototype_";



Variable_function_prototype_() : VariableScopes()
{
	type = ::dupr::generation::cpp::templates::CPPTemplate::Type::function_prototype_;
}

virtual ~Variable_function_prototype_() override = default;

Variable_function_prototype_(CPPTemplate* cpptemplate_, const std::vector<VariableBase*>& variables) : VariableScopes(variables)
{
type = ::dupr::generation::cpp::templates::CPPTemplate::Type::function_prototype_;

}



Variable_function_prototype_& operator=(const Variable_function_prototype_& variable)
{
	if (&variable == this)
	{
		return *this;
	}

	value = variable.value;
	isString = variable.isString;

	

	return *this;
}

};

struct Variable_left_angle_bracket_ : public VariableScopes
{

static constexpr auto name = "left_angle_bracket_";



Variable_left_angle_bracket_() : VariableScopes()
{
	type = ::dupr::generation::cpp::templates::CPPTemplate::Type::left_angle_bracket_;
}

virtual ~Variable_left_angle_bracket_() override = default;

Variable_left_angle_bracket_(CPPTemplate* cpptemplate_, const std::vector<VariableBase*>& variables) : VariableScopes(variables)
{
type = ::dupr::generation::cpp::templates::CPPTemplate::Type::left_angle_bracket_;

}



Variable_left_angle_bracket_& operator=(const Variable_left_angle_bracket_& variable)
{
	if (&variable == this)
	{
		return *this;
	}

	value = variable.value;
	isString = variable.isString;

	

	return *this;
}

};

struct Variable_left_bracket_ : public VariableScopes
{

static constexpr auto name = "left_bracket_";



Variable_left_bracket_() : VariableScopes()
{
	type = ::dupr::generation::cpp::templates::CPPTemplate::Type::left_bracket_;
}

virtual ~Variable_left_bracket_() override = default;

Variable_left_bracket_(CPPTemplate* cpptemplate_, const std::vector<VariableBase*>& variables) : VariableScopes(variables)
{
type = ::dupr::generation::cpp::templates::CPPTemplate::Type::left_bracket_;

}



Variable_left_bracket_& operator=(const Variable_left_bracket_& variable)
{
	if (&variable == this)
	{
		return *this;
	}

	value = variable.value;
	isString = variable.isString;

	

	return *this;
}

};

struct Variable_left_curly_bracket_ : public VariableScopes
{

static constexpr auto name = "left_curly_bracket_";



Variable_left_curly_bracket_() : VariableScopes()
{
	type = ::dupr::generation::cpp::templates::CPPTemplate::Type::left_curly_bracket_;
}

virtual ~Variable_left_curly_bracket_() override = default;

Variable_left_curly_bracket_(CPPTemplate* cpptemplate_, const std::vector<VariableBase*>& variables) : VariableScopes(variables)
{
type = ::dupr::generation::cpp::templates::CPPTemplate::Type::left_curly_bracket_;

}



Variable_left_curly_bracket_& operator=(const Variable_left_curly_bracket_& variable)
{
	if (&variable == this)
	{
		return *this;
	}

	value = variable.value;
	isString = variable.isString;

	

	return *this;
}

};

struct Variable_return_type_ : public VariableScopes
{

static constexpr auto name = "return_type_";



Variable_return_type_() : VariableScopes()
{
	type = ::dupr::generation::cpp::templates::CPPTemplate::Type::return_type_;
}

virtual ~Variable_return_type_() override = default;

Variable_return_type_(CPPTemplate* cpptemplate_, const std::vector<VariableBase*>& variables) : VariableScopes(variables)
{
type = ::dupr::generation::cpp::templates::CPPTemplate::Type::return_type_;

}



Variable_return_type_& operator=(const Variable_return_type_& variable)
{
	if (&variable == this)
	{
		return *this;
	}

	value = variable.value;
	isString = variable.isString;

	

	return *this;
}

};

struct Variable_right_angle_bracket_ : public VariableScopes
{

static constexpr auto name = "right_angle_bracket_";



Variable_right_angle_bracket_() : VariableScopes()
{
	type = ::dupr::generation::cpp::templates::CPPTemplate::Type::right_angle_bracket_;
}

virtual ~Variable_right_angle_bracket_() override = default;

Variable_right_angle_bracket_(CPPTemplate* cpptemplate_, const std::vector<VariableBase*>& variables) : VariableScopes(variables)
{
type = ::dupr::generation::cpp::templates::CPPTemplate::Type::right_angle_bracket_;

}



Variable_right_angle_bracket_& operator=(const Variable_right_angle_bracket_& variable)
{
	if (&variable == this)
	{
		return *this;
	}

	value = variable.value;
	isString = variable.isString;

	

	return *this;
}

};

struct Variable_right_bracket_ : public VariableScopes
{

static constexpr auto name = "right_bracket_";



Variable_right_bracket_() : VariableScopes()
{
	type = ::dupr::generation::cpp::templates::CPPTemplate::Type::right_bracket_;
}

virtual ~Variable_right_bracket_() override = default;

Variable_right_bracket_(CPPTemplate* cpptemplate_, const std::vector<VariableBase*>& variables) : VariableScopes(variables)
{
type = ::dupr::generation::cpp::templates::CPPTemplate::Type::right_bracket_;

}



Variable_right_bracket_& operator=(const Variable_right_bracket_& variable)
{
	if (&variable == this)
	{
		return *this;
	}

	value = variable.value;
	isString = variable.isString;

	

	return *this;
}

};

struct Variable_right_curly_bracket_ : public VariableScopes
{

static constexpr auto name = "right_curly_bracket_";



Variable_right_curly_bracket_() : VariableScopes()
{
	type = ::dupr::generation::cpp::templates::CPPTemplate::Type::right_curly_bracket_;
}

virtual ~Variable_right_curly_bracket_() override = default;

Variable_right_curly_bracket_(CPPTemplate* cpptemplate_, const std::vector<VariableBase*>& variables) : VariableScopes(variables)
{
type = ::dupr::generation::cpp::templates::CPPTemplate::Type::right_curly_bracket_;

}



Variable_right_curly_bracket_& operator=(const Variable_right_curly_bracket_& variable)
{
	if (&variable == this)
	{
		return *this;
	}

	value = variable.value;
	isString = variable.isString;

	

	return *this;
}

};

struct Variable_statement_ : public VariableScopes
{

static constexpr auto name = "statement_";



Variable_statement_() : VariableScopes()
{
	type = ::dupr::generation::cpp::templates::CPPTemplate::Type::statement_;
}

virtual ~Variable_statement_() override = default;

Variable_statement_(CPPTemplate* cpptemplate_, const std::vector<VariableBase*>& variables) : VariableScopes(variables)
{
type = ::dupr::generation::cpp::templates::CPPTemplate::Type::statement_;

}



Variable_statement_& operator=(const Variable_statement_& variable)
{
	if (&variable == this)
	{
		return *this;
	}

	value = variable.value;
	isString = variable.isString;

	

	return *this;
}

};


	public:
		inline static std::vector<VariableBase*> variables_to_delete = std::vector<VariableBase*>();

	public:
		std::vector<VariableBase*> variables_;

	public:
		// Members that one can directly access.
		// e.g. CPPTemplate.member = "auto-generated";
		Variable_argument_* argument_ = new Variable_argument_();
Variable_argument_name_* argument_name_ = new Variable_argument_name_();
Variable_argument_type_* argument_type_ = new Variable_argument_type_();
Variable_file_* file_ = new Variable_file_();
Variable_function_* function_ = new Variable_function_();
Variable_function_name_* function_name_ = new Variable_function_name_();
Variable_function_prototype_* function_prototype_ = new Variable_function_prototype_();
Variable_left_angle_bracket_* left_angle_bracket_ = new Variable_left_angle_bracket_();
Variable_left_bracket_* left_bracket_ = new Variable_left_bracket_();
Variable_left_curly_bracket_* left_curly_bracket_ = new Variable_left_curly_bracket_();
Variable_return_type_* return_type_ = new Variable_return_type_();
Variable_right_angle_bracket_* right_angle_bracket_ = new Variable_right_angle_bracket_();
Variable_right_bracket_* right_bracket_ = new Variable_right_bracket_();
Variable_right_curly_bracket_* right_curly_bracket_ = new Variable_right_curly_bracket_();
Variable_statement_* statement_ = new Variable_statement_();


	public:
		CPPTemplate()
		{
			*argument_ = Variable_argument_(this, std::vector<VariableBase*>({ GenerateVariable(argument_type_->This()), GenerateVariable(" "), GenerateVariable(argument_name_->This()) }));
*argument_name_ = Variable_argument_name_(this, std::vector<VariableBase*>({  }));
*argument_type_ = Variable_argument_type_(this, std::vector<VariableBase*>({  }));
*file_ = Variable_file_(this, std::vector<VariableBase*>({  }));
*function_ = Variable_function_(this, std::vector<VariableBase*>({ GenerateVariable("\n\t"), GenerateVariable(return_type_->This()), GenerateVariable(" "), GenerateVariable(function_name_->This()), GenerateVariable("("), GenerateVariable(argument_->Variable_Field()), GenerateVariable(")\n\t"), GenerateVariable("{"), GenerateVariable("\n\t\t"), GenerateVariable(statement_->Variable_Field()), GenerateVariable("\n\t"), GenerateVariable("}"), GenerateVariable("\n") }));
*function_name_ = Variable_function_name_(this, std::vector<VariableBase*>({  }));
*function_prototype_ = Variable_function_prototype_(this, std::vector<VariableBase*>({ GenerateVariable(return_type_->This()), GenerateVariable(" "), GenerateVariable(function_name_->This()), GenerateVariable("("), GenerateVariable(argument_->Variable_Field()), GenerateVariable(");") }));
*left_angle_bracket_ = Variable_left_angle_bracket_(this, std::vector<VariableBase*>({ GenerateVariable("<") }));
*left_bracket_ = Variable_left_bracket_(this, std::vector<VariableBase*>({ GenerateVariable("{") }));
*left_curly_bracket_ = Variable_left_curly_bracket_(this, std::vector<VariableBase*>({ GenerateVariable("(") }));
*return_type_ = Variable_return_type_(this, std::vector<VariableBase*>({  }));
*right_angle_bracket_ = Variable_right_angle_bracket_(this, std::vector<VariableBase*>({ GenerateVariable(">") }));
*right_bracket_ = Variable_right_bracket_(this, std::vector<VariableBase*>({ GenerateVariable("}") }));
*right_curly_bracket_ = Variable_right_curly_bracket_(this, std::vector<VariableBase*>({ GenerateVariable(")") }));
*statement_ = Variable_statement_(this, std::vector<VariableBase*>({  }));


			variables_.emplace_back(argument_);
variables_.emplace_back(argument_name_);
variables_.emplace_back(argument_type_);
variables_.emplace_back(file_);
variables_.emplace_back(function_);
variables_.emplace_back(function_name_);
variables_.emplace_back(function_prototype_);
variables_.emplace_back(left_angle_bracket_);
variables_.emplace_back(left_bracket_);
variables_.emplace_back(left_curly_bracket_);
variables_.emplace_back(return_type_);
variables_.emplace_back(right_angle_bracket_);
variables_.emplace_back(right_bracket_);
variables_.emplace_back(right_curly_bracket_);
variables_.emplace_back(statement_);

		}

		virtual ~CPPTemplate()
		{
			for(auto* variable : variables_to_delete)
			{
				delete variable;
			}

			variables_to_delete.clear();
		}

	public:
		// Default DST functions

		/*!	\fn GetOutput
		 *
		 *	\brief returns the output with the given the current state.
		 */
		std::string GetOutput()
		{
			return file_->Content()->GetValue();
		}

		/*!	\fn GetVariables
		 *
		 *	\brief Returns all top level variables known in this template.
		 */
		std::vector<VariableBase*> GetVariables()
		{
			return variables_;
		}

	public:
	};
}

#endif // DUPR_GENERATION_CPP_TEMPLATES_CPPTEMPLATE_h
