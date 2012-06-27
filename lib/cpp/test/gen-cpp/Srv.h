/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#ifndef Srv_H
#define Srv_H

#include <TProcessor.h>
#include "DebugProtoTest_types.h"

namespace thrift { namespace test { namespace debug {

class SrvIf {
 public:
  virtual ~SrvIf() {}
  virtual int32_t Janky(const int32_t arg) = 0;
  virtual void voidMethod() = 0;
  virtual int32_t primitiveMethod() = 0;
  virtual void structMethod(CompactProtoTestStruct& _return) = 0;
  virtual void methodWithDefaultArgs(const int32_t something) = 0;
  virtual void onewayMethod() = 0;
};

class SrvNull : virtual public SrvIf {
 public:
  virtual ~SrvNull() {}
  int32_t Janky(const int32_t /* arg */) {
    int32_t _return = 0;
    return _return;
  }
  void voidMethod() {
    return;
  }
  int32_t primitiveMethod() {
    int32_t _return = 0;
    return _return;
  }
  void structMethod(CompactProtoTestStruct& /* _return */) {
    return;
  }
  void methodWithDefaultArgs(const int32_t /* something */) {
    return;
  }
  void onewayMethod() {
    return;
  }
};

typedef struct _Srv_Janky_args__isset {
  _Srv_Janky_args__isset() : arg(false) {}
  bool arg;
} _Srv_Janky_args__isset;

class Srv_Janky_args {
 public:

  Srv_Janky_args() : arg(0) {
  }

  virtual ~Srv_Janky_args() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;

  int32_t arg;

  _Srv_Janky_args__isset __isset;

  bool operator == (const Srv_Janky_args & rhs) const
  {
    if (!(arg == rhs.arg))
      return false;
    return true;
  }
  bool operator != (const Srv_Janky_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Srv_Janky_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Srv_Janky_pargs {
 public:


  virtual ~Srv_Janky_pargs() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;

  const int32_t* arg;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Srv_Janky_result__isset {
  _Srv_Janky_result__isset() : success(false) {}
  bool success;
} _Srv_Janky_result__isset;

class Srv_Janky_result {
 public:

  Srv_Janky_result() : success(0) {
  }

  virtual ~Srv_Janky_result() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;

  int32_t success;

  _Srv_Janky_result__isset __isset;

  bool operator == (const Srv_Janky_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Srv_Janky_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Srv_Janky_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Srv_Janky_presult__isset {
  _Srv_Janky_presult__isset() : success(false) {}
  bool success;
} _Srv_Janky_presult__isset;

class Srv_Janky_presult {
 public:


  virtual ~Srv_Janky_presult() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;

  int32_t* success;

  _Srv_Janky_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class Srv_voidMethod_args {
 public:

  Srv_voidMethod_args() {
  }

  virtual ~Srv_voidMethod_args() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;


  bool operator == (const Srv_voidMethod_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const Srv_voidMethod_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Srv_voidMethod_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Srv_voidMethod_pargs {
 public:


  virtual ~Srv_voidMethod_pargs() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;


  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Srv_voidMethod_result {
 public:

  Srv_voidMethod_result() {
  }

  virtual ~Srv_voidMethod_result() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;


  bool operator == (const Srv_voidMethod_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const Srv_voidMethod_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Srv_voidMethod_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Srv_voidMethod_presult {
 public:


  virtual ~Srv_voidMethod_presult() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;


  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class Srv_primitiveMethod_args {
 public:

  Srv_primitiveMethod_args() {
  }

  virtual ~Srv_primitiveMethod_args() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;


  bool operator == (const Srv_primitiveMethod_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const Srv_primitiveMethod_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Srv_primitiveMethod_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Srv_primitiveMethod_pargs {
 public:


  virtual ~Srv_primitiveMethod_pargs() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;


  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Srv_primitiveMethod_result__isset {
  _Srv_primitiveMethod_result__isset() : success(false) {}
  bool success;
} _Srv_primitiveMethod_result__isset;

class Srv_primitiveMethod_result {
 public:

  Srv_primitiveMethod_result() : success(0) {
  }

  virtual ~Srv_primitiveMethod_result() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;

  int32_t success;

  _Srv_primitiveMethod_result__isset __isset;

  bool operator == (const Srv_primitiveMethod_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Srv_primitiveMethod_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Srv_primitiveMethod_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Srv_primitiveMethod_presult__isset {
  _Srv_primitiveMethod_presult__isset() : success(false) {}
  bool success;
} _Srv_primitiveMethod_presult__isset;

class Srv_primitiveMethod_presult {
 public:


  virtual ~Srv_primitiveMethod_presult() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;

  int32_t* success;

  _Srv_primitiveMethod_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class Srv_structMethod_args {
 public:

  Srv_structMethod_args() {
  }

  virtual ~Srv_structMethod_args() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;


  bool operator == (const Srv_structMethod_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const Srv_structMethod_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Srv_structMethod_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Srv_structMethod_pargs {
 public:


  virtual ~Srv_structMethod_pargs() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;


  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Srv_structMethod_result__isset {
  _Srv_structMethod_result__isset() : success(false) {}
  bool success;
} _Srv_structMethod_result__isset;

class Srv_structMethod_result {
 public:

  Srv_structMethod_result() {
  }

  virtual ~Srv_structMethod_result() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;

  CompactProtoTestStruct success;

  _Srv_structMethod_result__isset __isset;

  bool operator == (const Srv_structMethod_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Srv_structMethod_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Srv_structMethod_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Srv_structMethod_presult__isset {
  _Srv_structMethod_presult__isset() : success(false) {}
  bool success;
} _Srv_structMethod_presult__isset;

class Srv_structMethod_presult {
 public:


  virtual ~Srv_structMethod_presult() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;

  CompactProtoTestStruct* success;

  _Srv_structMethod_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _Srv_methodWithDefaultArgs_args__isset {
  _Srv_methodWithDefaultArgs_args__isset() : something(false) {}
  bool something;
} _Srv_methodWithDefaultArgs_args__isset;

class Srv_methodWithDefaultArgs_args {
 public:

  Srv_methodWithDefaultArgs_args() : something(2) {
  }

  virtual ~Srv_methodWithDefaultArgs_args() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;

  int32_t something;

  _Srv_methodWithDefaultArgs_args__isset __isset;

  bool operator == (const Srv_methodWithDefaultArgs_args & rhs) const
  {
    if (!(something == rhs.something))
      return false;
    return true;
  }
  bool operator != (const Srv_methodWithDefaultArgs_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Srv_methodWithDefaultArgs_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Srv_methodWithDefaultArgs_pargs {
 public:


  virtual ~Srv_methodWithDefaultArgs_pargs() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;

  const int32_t* something;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Srv_methodWithDefaultArgs_result {
 public:

  Srv_methodWithDefaultArgs_result() {
  }

  virtual ~Srv_methodWithDefaultArgs_result() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;


  bool operator == (const Srv_methodWithDefaultArgs_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const Srv_methodWithDefaultArgs_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Srv_methodWithDefaultArgs_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Srv_methodWithDefaultArgs_presult {
 public:


  virtual ~Srv_methodWithDefaultArgs_presult() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;


  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class Srv_onewayMethod_args {
 public:

  Srv_onewayMethod_args() {
  }

  virtual ~Srv_onewayMethod_args() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;


  bool operator == (const Srv_onewayMethod_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const Srv_onewayMethod_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Srv_onewayMethod_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Srv_onewayMethod_pargs {
 public:


  virtual ~Srv_onewayMethod_pargs() throw() {}

  static ::apache::thrift::reflection::local::TypeSpec* local_reflection;


  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class SrvClient : virtual public SrvIf {
 public:
  SrvClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) :
    piprot_(prot),
    poprot_(prot) {
    iprot_ = prot.get();
    oprot_ = prot.get();
  }
  SrvClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) :
    piprot_(iprot),
    poprot_(oprot) {
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  int32_t Janky(const int32_t arg);
  void send_Janky(const int32_t arg);
  int32_t recv_Janky();
  void voidMethod();
  void send_voidMethod();
  void recv_voidMethod();
  int32_t primitiveMethod();
  void send_primitiveMethod();
  int32_t recv_primitiveMethod();
  void structMethod(CompactProtoTestStruct& _return);
  void send_structMethod();
  void recv_structMethod(CompactProtoTestStruct& _return);
  void methodWithDefaultArgs(const int32_t something);
  void send_methodWithDefaultArgs(const int32_t something);
  void recv_methodWithDefaultArgs();
  void onewayMethod();
  void send_onewayMethod();
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class SrvProcessor : virtual public ::apache::thrift::TProcessor {
 protected:
  boost::shared_ptr<SrvIf> iface_;
  virtual bool process_fn(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, std::string& fname, int32_t seqid, void* callContext);
 private:
  std::map<std::string, void (SrvProcessor::*)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*)> processMap_;
  void process_Janky(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_voidMethod(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_primitiveMethod(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_structMethod(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_methodWithDefaultArgs(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_onewayMethod(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  SrvProcessor(boost::shared_ptr<SrvIf> iface) :
    iface_(iface) {
    processMap_["Janky"] = &SrvProcessor::process_Janky;
    processMap_["voidMethod"] = &SrvProcessor::process_voidMethod;
    processMap_["primitiveMethod"] = &SrvProcessor::process_primitiveMethod;
    processMap_["structMethod"] = &SrvProcessor::process_structMethod;
    processMap_["methodWithDefaultArgs"] = &SrvProcessor::process_methodWithDefaultArgs;
    processMap_["onewayMethod"] = &SrvProcessor::process_onewayMethod;
  }

  virtual bool process(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot, void* callContext);
  virtual ~SrvProcessor() {}
};

class SrvMultiface : virtual public SrvIf {
 public:
  SrvMultiface(std::vector<boost::shared_ptr<SrvIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~SrvMultiface() {}
 protected:
  std::vector<boost::shared_ptr<SrvIf> > ifaces_;
  SrvMultiface() {}
  void add(boost::shared_ptr<SrvIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  int32_t Janky(const int32_t arg) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        return ifaces_[i]->Janky(arg);
      } else {
        ifaces_[i]->Janky(arg);
      }
    }
  }

  void voidMethod() {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      ifaces_[i]->voidMethod();
    }
  }

  int32_t primitiveMethod() {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        return ifaces_[i]->primitiveMethod();
      } else {
        ifaces_[i]->primitiveMethod();
      }
    }
  }

  void structMethod(CompactProtoTestStruct& _return) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->structMethod(_return);
        return;
      } else {
        ifaces_[i]->structMethod(_return);
      }
    }
  }

  void methodWithDefaultArgs(const int32_t something) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      ifaces_[i]->methodWithDefaultArgs(something);
    }
  }

  void onewayMethod() {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      ifaces_[i]->onewayMethod();
    }
  }

};

}}} // namespace

#endif
