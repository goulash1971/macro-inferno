#include "test_ff_marshalling.h"
#include "test_ff_args.h"
#include "test_ff_propgetters.h"

void init(v8::Local<v8::Object> target) {
  Test_FF_Marshalling::Init(target);
	Test_FF_Args::Init(target);
	Test_FF_PropGetters::Init(target);
};

NODE_MODULE(test, init)

