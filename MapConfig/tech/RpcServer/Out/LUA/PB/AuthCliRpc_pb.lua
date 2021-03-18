-- Generated By protoc-gen-lua Do not Edit
local protobuf = require "protobuf"
local PublicStruct_pb = require("PublicStruct_pb")
module('AuthCliRpc_pb')


local AUTHRPCAUTHASK = protobuf.Descriptor();
local AUTHRPCAUTHASK_USERNAME_FIELD = protobuf.FieldDescriptor();
local AUTHRPCAUTHASK_PASSWORD_FIELD = protobuf.FieldDescriptor();
local AUTHRPCAUTHREPLY = protobuf.Descriptor();
local AUTHRPCAUTHREPLY_RESULT_FIELD = protobuf.FieldDescriptor();
local AUTHRPCAUTHREPLY_UID_FIELD = protobuf.FieldDescriptor();
local AUTHRPCKICKNOTIFY = protobuf.Descriptor();

AUTHRPCAUTHASK_USERNAME_FIELD.name = "UserName"
AUTHRPCAUTHASK_USERNAME_FIELD.full_name = ".AuthRpcAuthAsk.UserName"
AUTHRPCAUTHASK_USERNAME_FIELD.number = 1
AUTHRPCAUTHASK_USERNAME_FIELD.index = 0
AUTHRPCAUTHASK_USERNAME_FIELD.label = 1
AUTHRPCAUTHASK_USERNAME_FIELD.has_default_value = false
AUTHRPCAUTHASK_USERNAME_FIELD.default_value = ""
AUTHRPCAUTHASK_USERNAME_FIELD.type = 9
AUTHRPCAUTHASK_USERNAME_FIELD.cpp_type = 9

AUTHRPCAUTHASK_PASSWORD_FIELD.name = "PassWord"
AUTHRPCAUTHASK_PASSWORD_FIELD.full_name = ".AuthRpcAuthAsk.PassWord"
AUTHRPCAUTHASK_PASSWORD_FIELD.number = 2
AUTHRPCAUTHASK_PASSWORD_FIELD.index = 1
AUTHRPCAUTHASK_PASSWORD_FIELD.label = 1
AUTHRPCAUTHASK_PASSWORD_FIELD.has_default_value = false
AUTHRPCAUTHASK_PASSWORD_FIELD.default_value = ""
AUTHRPCAUTHASK_PASSWORD_FIELD.type = 9
AUTHRPCAUTHASK_PASSWORD_FIELD.cpp_type = 9

AUTHRPCAUTHASK.name = "AuthRpcAuthAsk"
AUTHRPCAUTHASK.full_name = ".AuthRpcAuthAsk"
AUTHRPCAUTHASK.nested_types = {}
AUTHRPCAUTHASK.enum_types = {}
AUTHRPCAUTHASK.fields = {AUTHRPCAUTHASK_USERNAME_FIELD, AUTHRPCAUTHASK_PASSWORD_FIELD}
AUTHRPCAUTHASK.is_extendable = false
AUTHRPCAUTHASK.extensions = {}
AUTHRPCAUTHREPLY_RESULT_FIELD.name = "Result"
AUTHRPCAUTHREPLY_RESULT_FIELD.full_name = ".AuthRpcAuthReply.Result"
AUTHRPCAUTHREPLY_RESULT_FIELD.number = 1
AUTHRPCAUTHREPLY_RESULT_FIELD.index = 0
AUTHRPCAUTHREPLY_RESULT_FIELD.label = 1
AUTHRPCAUTHREPLY_RESULT_FIELD.has_default_value = true
AUTHRPCAUTHREPLY_RESULT_FIELD.default_value = -9999
AUTHRPCAUTHREPLY_RESULT_FIELD.type = 17
AUTHRPCAUTHREPLY_RESULT_FIELD.cpp_type = 1

AUTHRPCAUTHREPLY_UID_FIELD.name = "UID"
AUTHRPCAUTHREPLY_UID_FIELD.full_name = ".AuthRpcAuthReply.UID"
AUTHRPCAUTHREPLY_UID_FIELD.number = 14
AUTHRPCAUTHREPLY_UID_FIELD.index = 1
AUTHRPCAUTHREPLY_UID_FIELD.label = 1
AUTHRPCAUTHREPLY_UID_FIELD.has_default_value = true
AUTHRPCAUTHREPLY_UID_FIELD.default_value = 0
AUTHRPCAUTHREPLY_UID_FIELD.type = 18
AUTHRPCAUTHREPLY_UID_FIELD.cpp_type = 2

AUTHRPCAUTHREPLY.name = "AuthRpcAuthReply"
AUTHRPCAUTHREPLY.full_name = ".AuthRpcAuthReply"
AUTHRPCAUTHREPLY.nested_types = {}
AUTHRPCAUTHREPLY.enum_types = {}
AUTHRPCAUTHREPLY.fields = {AUTHRPCAUTHREPLY_RESULT_FIELD, AUTHRPCAUTHREPLY_UID_FIELD}
AUTHRPCAUTHREPLY.is_extendable = false
AUTHRPCAUTHREPLY.extensions = {}
AUTHRPCKICKNOTIFY.name = "AuthRpcKickNotify"
AUTHRPCKICKNOTIFY.full_name = ".AuthRpcKickNotify"
AUTHRPCKICKNOTIFY.nested_types = {}
AUTHRPCKICKNOTIFY.enum_types = {}
AUTHRPCKICKNOTIFY.fields = {}
AUTHRPCKICKNOTIFY.is_extendable = false
AUTHRPCKICKNOTIFY.extensions = {}

AuthRpcAuthAsk = protobuf.Message(AUTHRPCAUTHASK)
AuthRpcAuthReply = protobuf.Message(AUTHRPCAUTHREPLY)
AuthRpcKickNotify = protobuf.Message(AUTHRPCKICKNOTIFY)

