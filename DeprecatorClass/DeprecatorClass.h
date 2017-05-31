#include <iostream>
#include <fstream>
#include <string>
#include "base/memory/singleton.h"
#include "base/json/json_file_value_serializer.h"
#include "base/path_service.h"
#include "base/values.h"
#include "base/json/json_string_value_serializer.h"

#define config_doc "Deprecatorconfig.json"

class DeprecatorClass {
public:

 static DeprecatorClass* GetInstance();
 void LoadConfig();
 bool Check(std::string func);

private:

 DeprecatorClass();
 friend struct base::DefaultSingletonTraits<DeprecatorClass>;

 DISALLOW_COPY_AND_ASSIGN(DeprecatorClass);
};
