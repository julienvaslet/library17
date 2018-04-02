#include <iostream>

#include <log/log.h>
#include <data/json/Json.h>

using namespace std;

namespace data
{
    namespace json
    {
        Json::Json()
        {
            DEBUG( "Constructor" );
        }

        Json::~Json()
        {
            DEBUG( "Destructor" );
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
