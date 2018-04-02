#include <iostream>

#include <data/json/Json.h>

using namespace std;

namespace data
{
    namespace json
    {
        Json::Json()
        {
            cout << "[data][Json] Constructor" << endl;
        }

        Json::~Json()
        {
            cout << "[data][Json] Destructor" << endl;
        }

        string Json::toString() const
        {
            string data { "json data!" };
            return data;
        }

        unique_ptr<Json> Json::parse( const string& json )
        {
            unique_ptr<Json> data { new Json() };
            return data;
        }
    }
}
