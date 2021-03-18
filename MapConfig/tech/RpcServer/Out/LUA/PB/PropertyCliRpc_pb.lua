-- Generated By protoc-gen-lua Do not Edit
local protobuf = require "protobuf"
local PublicStruct_pb = require("PublicStruct_pb")
module('PropertyCliRpc_pb')


local PROPERTYRPCSYNCASK = protobuf.Descriptor();
local PROPERTYRPCSYNCASK_UID_FIELD = protobuf.FieldDescriptor();
local PROPERTYRPCSYNCREPLY = protobuf.Descriptor();
local PROPERTYRPCSYNCREPLY_RESULT_FIELD = protobuf.FieldDescriptor();
local PROPERTYRPCSYNCREPLY_USER_FIELD = protobuf.FieldDescriptor();
local PROPERTYRPCUPDATENOTIFY = protobuf.Descriptor();
local PROPERTYRPCUPDATENOTIFY_USER_FIELD = protobuf.FieldDescriptor();
local PROPERTYRPCCHANGEHEADASK = protobuf.Descriptor();
local PROPERTYRPCCHANGEHEADASK_HEADID_FIELD = protobuf.FieldDescriptor();
local PROPERTYRPCCHANGEHEADREPLY = protobuf.Descriptor();
local PROPERTYRPCCHANGEHEADREPLY_RESULT_FIELD = protobuf.FieldDescriptor();
local PROPERTYRPCCHANGEHEADREPLY_HEADID_FIELD = protobuf.FieldDescriptor();

PROPERTYRPCSYNCASK_UID_FIELD.name = "Uid"
PROPERTYRPCSYNCASK_UID_FIELD.full_name = ".PropertyRpcSyncAsk.Uid"
PROPERTYRPCSYNCASK_UID_FIELD.number = 1
PROPERTYRPCSYNCASK_UID_FIELD.index = 0
PROPERTYRPCSYNCASK_UID_FIELD.label = 1
PROPERTYRPCSYNCASK_UID_FIELD.has_default_value = true
PROPERTYRPCSYNCASK_UID_FIELD.default_value = -1
PROPERTYRPCSYNCASK_UID_FIELD.type = 18
PROPERTYRPCSYNCASK_UID_FIELD.cpp_type = 2

PROPERTYRPCSYNCASK.name = "PropertyRpcSyncAsk"
PROPERTYRPCSYNCASK.full_name = ".PropertyRpcSyncAsk"
PROPERTYRPCSYNCASK.nested_types = {}
PROPERTYRPCSYNCASK.enum_types = {}
PROPERTYRPCSYNCASK.fields = {PROPERTYRPCSYNCASK_UID_FIELD}
PROPERTYRPCSYNCASK.is_extendable = false
PROPERTYRPCSYNCASK.extensions = {}
PROPERTYRPCSYNCREPLY_RESULT_FIELD.name = "Result"
PROPERTYRPCSYNCREPLY_RESULT_FIELD.full_name = ".PropertyRpcSyncReply.Result"
PROPERTYRPCSYNCREPLY_RESULT_FIELD.number = 1
PROPERTYRPCSYNCREPLY_RESULT_FIELD.index = 0
PROPERTYRPCSYNCREPLY_RESULT_FIELD.label = 1
PROPERTYRPCSYNCREPLY_RESULT_FIELD.has_default_value = true
PROPERTYRPCSYNCREPLY_RESULT_FIELD.default_value = -9999
PROPERTYRPCSYNCREPLY_RESULT_FIELD.type = 17
PROPERTYRPCSYNCREPLY_RESULT_FIELD.cpp_type = 1

PROPERTYRPCSYNCREPLY_USER_FIELD.name = "User"
PROPERTYRPCSYNCREPLY_USER_FIELD.full_name = ".PropertyRpcSyncReply.User"
PROPERTYRPCSYNCREPLY_USER_FIELD.number = 2
PROPERTYRPCSYNCREPLY_USER_FIELD.index = 1
PROPERTYRPCSYNCREPLY_USER_FIELD.label = 1
PROPERTYRPCSYNCREPLY_USER_FIELD.has_default_value = false
PROPERTYRPCSYNCREPLY_USER_FIELD.default_value = nil
PROPERTYRPCSYNCREPLY_USER_FIELD.message_type = PUBLICSTRUCT_PB_USER
PROPERTYRPCSYNCREPLY_USER_FIELD.type = 11
PROPERTYRPCSYNCREPLY_USER_FIELD.cpp_type = 10

PROPERTYRPCSYNCREPLY.name = "PropertyRpcSyncReply"
PROPERTYRPCSYNCREPLY.full_name = ".PropertyRpcSyncReply"
PROPERTYRPCSYNCREPLY.nested_types = {}
PROPERTYRPCSYNCREPLY.enum_types = {}
PROPERTYRPCSYNCREPLY.fields = {PROPERTYRPCSYNCREPLY_RESULT_FIELD, PROPERTYRPCSYNCREPLY_USER_FIELD}
PROPERTYRPCSYNCREPLY.is_extendable = false
PROPERTYRPCSYNCREPLY.extensions = {}
PROPERTYRPCUPDATENOTIFY_USER_FIELD.name = "User"
PROPERTYRPCUPDATENOTIFY_USER_FIELD.full_name = ".PropertyRpcUpdateNotify.User"
PROPERTYRPCUPDATENOTIFY_USER_FIELD.number = 1
PROPERTYRPCUPDATENOTIFY_USER_FIELD.index = 0
PROPERTYRPCUPDATENOTIFY_USER_FIELD.label = 1
PROPERTYRPCUPDATENOTIFY_USER_FIELD.has_default_value = false
PROPERTYRPCUPDATENOTIFY_USER_FIELD.default_value = nil
PROPERTYRPCUPDATENOTIFY_USER_FIELD.message_type = PUBLICSTRUCT_PB_USER
PROPERTYRPCUPDATENOTIFY_USER_FIELD.type = 11
PROPERTYRPCUPDATENOTIFY_USER_FIELD.cpp_type = 10

PROPERTYRPCUPDATENOTIFY.name = "PropertyRpcUpdateNotify"
PROPERTYRPCUPDATENOTIFY.full_name = ".PropertyRpcUpdateNotify"
PROPERTYRPCUPDATENOTIFY.nested_types = {}
PROPERTYRPCUPDATENOTIFY.enum_types = {}
PROPERTYRPCUPDATENOTIFY.fields = {PROPERTYRPCUPDATENOTIFY_USER_FIELD}
PROPERTYRPCUPDATENOTIFY.is_extendable = false
PROPERTYRPCUPDATENOTIFY.extensions = {}
PROPERTYRPCCHANGEHEADASK_HEADID_FIELD.name = "HeadID"
PROPERTYRPCCHANGEHEADASK_HEADID_FIELD.full_name = ".PropertyRpcChangeHeadAsk.HeadID"
PROPERTYRPCCHANGEHEADASK_HEADID_FIELD.number = 1
PROPERTYRPCCHANGEHEADASK_HEADID_FIELD.index = 0
PROPERTYRPCCHANGEHEADASK_HEADID_FIELD.label = 1
PROPERTYRPCCHANGEHEADASK_HEADID_FIELD.has_default_value = true
PROPERTYRPCCHANGEHEADASK_HEADID_FIELD.default_value = 1
PROPERTYRPCCHANGEHEADASK_HEADID_FIELD.type = 17
PROPERTYRPCCHANGEHEADASK_HEADID_FIELD.cpp_type = 1

PROPERTYRPCCHANGEHEADASK.name = "PropertyRpcChangeHeadAsk"
PROPERTYRPCCHANGEHEADASK.full_name = ".PropertyRpcChangeHeadAsk"
PROPERTYRPCCHANGEHEADASK.nested_types = {}
PROPERTYRPCCHANGEHEADASK.enum_types = {}
PROPERTYRPCCHANGEHEADASK.fields = {PROPERTYRPCCHANGEHEADASK_HEADID_FIELD}
PROPERTYRPCCHANGEHEADASK.is_extendable = false
PROPERTYRPCCHANGEHEADASK.extensions = {}
PROPERTYRPCCHANGEHEADREPLY_RESULT_FIELD.name = "Result"
PROPERTYRPCCHANGEHEADREPLY_RESULT_FIELD.full_name = ".PropertyRpcChangeHeadReply.Result"
PROPERTYRPCCHANGEHEADREPLY_RESULT_FIELD.number = 1
PROPERTYRPCCHANGEHEADREPLY_RESULT_FIELD.index = 0
PROPERTYRPCCHANGEHEADREPLY_RESULT_FIELD.label = 1
PROPERTYRPCCHANGEHEADREPLY_RESULT_FIELD.has_default_value = true
PROPERTYRPCCHANGEHEADREPLY_RESULT_FIELD.default_value = -9999
PROPERTYRPCCHANGEHEADREPLY_RESULT_FIELD.type = 17
PROPERTYRPCCHANGEHEADREPLY_RESULT_FIELD.cpp_type = 1

PROPERTYRPCCHANGEHEADREPLY_HEADID_FIELD.name = "HeadID"
PROPERTYRPCCHANGEHEADREPLY_HEADID_FIELD.full_name = ".PropertyRpcChangeHeadReply.HeadID"
PROPERTYRPCCHANGEHEADREPLY_HEADID_FIELD.number = 2
PROPERTYRPCCHANGEHEADREPLY_HEADID_FIELD.index = 1
PROPERTYRPCCHANGEHEADREPLY_HEADID_FIELD.label = 1
PROPERTYRPCCHANGEHEADREPLY_HEADID_FIELD.has_default_value = true
PROPERTYRPCCHANGEHEADREPLY_HEADID_FIELD.default_value = 1
PROPERTYRPCCHANGEHEADREPLY_HEADID_FIELD.type = 17
PROPERTYRPCCHANGEHEADREPLY_HEADID_FIELD.cpp_type = 1

PROPERTYRPCCHANGEHEADREPLY.name = "PropertyRpcChangeHeadReply"
PROPERTYRPCCHANGEHEADREPLY.full_name = ".PropertyRpcChangeHeadReply"
PROPERTYRPCCHANGEHEADREPLY.nested_types = {}
PROPERTYRPCCHANGEHEADREPLY.enum_types = {}
PROPERTYRPCCHANGEHEADREPLY.fields = {PROPERTYRPCCHANGEHEADREPLY_RESULT_FIELD, PROPERTYRPCCHANGEHEADREPLY_HEADID_FIELD}
PROPERTYRPCCHANGEHEADREPLY.is_extendable = false
PROPERTYRPCCHANGEHEADREPLY.extensions = {}

PropertyRpcChangeHeadAsk = protobuf.Message(PROPERTYRPCCHANGEHEADASK)
PropertyRpcChangeHeadReply = protobuf.Message(PROPERTYRPCCHANGEHEADREPLY)
PropertyRpcSyncAsk = protobuf.Message(PROPERTYRPCSYNCASK)
PropertyRpcSyncReply = protobuf.Message(PROPERTYRPCSYNCREPLY)
PropertyRpcUpdateNotify = protobuf.Message(PROPERTYRPCUPDATENOTIFY)
