//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: PropertyCliRpc.proto
// Note: requires additional types generated from: PublicStruct.proto
namespace GenPB
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"PropertyRpcSyncAsk")]
  public partial class PropertyRpcSyncAsk : global::ProtoBuf.IExtensible
  {
    public PropertyRpcSyncAsk() {}
    
    private long _Uid = (long)-1;
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"Uid", DataFormat = global::ProtoBuf.DataFormat.ZigZag)]
    [global::System.ComponentModel.DefaultValue((long)-1)]
    public long Uid
    {
      get { return _Uid; }
      set { _Uid = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"PropertyRpcSyncReply")]
  public partial class PropertyRpcSyncReply : global::ProtoBuf.IExtensible
  {
    public PropertyRpcSyncReply() {}
    
    private int _Result = (int)-9999;
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"Result", DataFormat = global::ProtoBuf.DataFormat.ZigZag)]
    [global::System.ComponentModel.DefaultValue((int)-9999)]
    public int Result
    {
      get { return _Result; }
      set { _Result = value; }
    }
    private User _User = null;
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"User", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public User User
    {
      get { return _User; }
      set { _User = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"PropertyRpcUpdateNotify")]
  public partial class PropertyRpcUpdateNotify : global::ProtoBuf.IExtensible
  {
    public PropertyRpcUpdateNotify() {}
    
    private User _User = null;
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"User", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public User User
    {
      get { return _User; }
      set { _User = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"PropertyRpcChangeHeadAsk")]
  public partial class PropertyRpcChangeHeadAsk : global::ProtoBuf.IExtensible
  {
    public PropertyRpcChangeHeadAsk() {}
    
    private int _HeadID = (int)1;
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"HeadID", DataFormat = global::ProtoBuf.DataFormat.ZigZag)]
    [global::System.ComponentModel.DefaultValue((int)1)]
    public int HeadID
    {
      get { return _HeadID; }
      set { _HeadID = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"PropertyRpcChangeHeadReply")]
  public partial class PropertyRpcChangeHeadReply : global::ProtoBuf.IExtensible
  {
    public PropertyRpcChangeHeadReply() {}
    
    private int _Result = (int)-9999;
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"Result", DataFormat = global::ProtoBuf.DataFormat.ZigZag)]
    [global::System.ComponentModel.DefaultValue((int)-9999)]
    public int Result
    {
      get { return _Result; }
      set { _Result = value; }
    }
    private int _HeadID = (int)1;
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"HeadID", DataFormat = global::ProtoBuf.DataFormat.ZigZag)]
    [global::System.ComponentModel.DefaultValue((int)1)]
    public int HeadID
    {
      get { return _HeadID; }
      set { _HeadID = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}