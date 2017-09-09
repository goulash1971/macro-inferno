const { assert } = require('chai');

exports.assertErrorMsg = (func, msg) => {
  let errMsg = '';
  try {
    func();
  } catch (err) {
    errMsg = err.toString();
  }
  assert.include(errMsg, msg);
};

const getTypeErrMsg = type => `to be of type: ${type}`;

exports.getArgTypeErrMsg = (methodName, argN, type) => `${methodName} - expected arg ${argN} ${getTypeErrMsg(type)}`;

exports.getTypeErrMsg = getTypeErrMsg;

exports.values = {
  aBool: true,
  aNumber: 0.1,
  anInt: -1,
  anUint: 1,
  aString: 'a string',
  anEmptyObject: {},
  anEmptyArray: [],

  aBoolDefault: false,
  aNumberDefault: -0.1,
  anIntDefault: -2,
  anUintDefault: 2,
  aStringDefault: 'foo'
};
