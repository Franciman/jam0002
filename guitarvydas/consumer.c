// consumer
void initConsumer (Component* self) {
  // nothing to do here
}

void reactConsumer (Component* self, Message* m) {
  printf ("consumer received: /%c/\n", (char) m->datum);
}

