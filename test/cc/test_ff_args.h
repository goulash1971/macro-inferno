#include <macro-inferno.h>

class Test_FF_Args {
public:
	static NAN_MODULE_INIT(Init) {
		Nan::SetMethod(target, "arg0IsBool", arg0IsBool);
		Nan::SetMethod(target, "arg0IsNumber", arg0IsNumber);
		Nan::SetMethod(target, "arg0IsUint", arg0IsUint);
		Nan::SetMethod(target, "arg0IsInt", arg0IsInt);
		Nan::SetMethod(target, "arg0IsString", arg0IsString);
		Nan::SetMethod(target, "arg0IsOptBool", arg0IsOptBool);
		Nan::SetMethod(target, "arg0IsOptNumber", arg0IsOptNumber);
		Nan::SetMethod(target, "arg0IsOptUint", arg0IsOptUint);
		Nan::SetMethod(target, "arg0IsOptInt", arg0IsOptInt);
		Nan::SetMethod(target, "arg0IsOptString", arg0IsOptString);
	}

	static NAN_METHOD(arg0IsBool) {
		FF_METHOD_CONTEXT("arg0IsBool");
		FF_ARG_BOOL(0, bool arg);
		FF_RETURN(Nan::New(arg));
	}

	static NAN_METHOD(arg0IsNumber) {
		FF_METHOD_CONTEXT("arg0IsNumber");
		FF_ARG_NUMBER(0, double arg);
		FF_RETURN(Nan::New(arg));
	}

	static NAN_METHOD(arg0IsUint) {
		FF_METHOD_CONTEXT("arg0IsUint");
		FF_ARG_UINT(0, uint arg);
		FF_RETURN(Nan::New(arg));
	}

	static NAN_METHOD(arg0IsInt) {
		FF_METHOD_CONTEXT("arg0IsInt");
		FF_ARG_INT(0, int arg);
		FF_RETURN(Nan::New(arg));
	}

	static NAN_METHOD(arg0IsString) {
		FF_METHOD_CONTEXT("arg0IsString");
		FF_ARG_STRING(0, std::string arg);
		FF_RETURN(FF_NEW_STRING(arg));
	}

	static NAN_METHOD(arg0IsOptBool) {
		FF_METHOD_CONTEXT("arg0IsOptBool");
		FF_ARG_BOOL_IFDEF(0, bool arg, false);
		FF_RETURN(Nan::New(arg));
	}

	static NAN_METHOD(arg0IsOptNumber) {
		FF_METHOD_CONTEXT("arg0IsOptNumber");
		FF_ARG_NUMBER_IFDEF(0, double arg, -0.1);
		FF_RETURN(Nan::New(arg));
	}

	static NAN_METHOD(arg0IsOptUint) {
		FF_METHOD_CONTEXT("arg0IsOptUint");
		FF_ARG_UINT_IFDEF(0, uint arg, 2);
		FF_RETURN(Nan::New(arg));
	}

	static NAN_METHOD(arg0IsOptInt) {
		FF_METHOD_CONTEXT("arg0IsOptInt");
		FF_ARG_INT_IFDEF(0, int arg, -2);
		FF_RETURN(Nan::New(arg));
	}

	static NAN_METHOD(arg0IsOptString) {
		FF_METHOD_CONTEXT("arg0IsOptString");
		FF_ARG_STRING_IFDEF(0, std::string arg, "foo");
		FF_RETURN(FF_NEW_STRING(arg));
	}
};