#ifndef CTRIP_PROTOBUF_COMPILER_CSHARP_GENERATOR_H__
#define CTRIP_PROTOBUF_COMPILER_CSHARP_GENERATOR_H__

#include <string>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_generator.h>

#include <ctrip/protobuf/compiler/ctrip_code_generator.h>

using namespace std;
using namespace google::protobuf;
using namespace google::protobuf::io;
using namespace google::protobuf::compiler;

namespace ctrip {
namespace protobuf {
namespace compiler {
namespace csharp {

class LIBPROTOC_EXPORT CtripCSharpCodeGenerator : public CtripCodeGenerator {

public:
  CtripCSharpCodeGenerator();
  ~CtripCSharpCodeGenerator();

  // Returns the version of this code generator
  virtual string version() const { return CSHARP_CODE_GENERATOR_VERSION; }

  // Returns the package/namespace name of the gRPC services defined in the given file.
  string ServicePackage(const FileDescriptor* file) const;

  // Returns the name of the outer class that wraps in all the generated code for the given service.
  string ServiceClassName(const CtripServiceDescriptor* service) const;

  // Returns the name of the source code file extension: .java .cs
  string FileExtension() const;

  // Hanlding files
  bool GenerateFile(const FileDescriptor* file, const string& parameter, GeneratorContext* context, string* error) const;

  // Writes the generated service interface into the given ZeroCopyOutputStream
  void GenerateService(const CtripServiceDescriptor* service, ZeroCopyOutputStream* out) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(CtripCSharpCodeGenerator);
};

} // namespace csharp
} // namespace ctrip
} // namespace protobuf
} // namespace compiler

#endif  // CTRIP_PROTOBUF_COMPILER_CSHARP_GENERATOR_H__