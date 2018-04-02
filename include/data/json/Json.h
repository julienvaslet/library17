#ifndef __DATA_JSON_JSON_H
#define __DATA_JSON_JSON_H  1

#include <memory>
#include <string>

using namespace std;

namespace data
{
    namespace json
    {
        class Json
        {
            protected:

            public:
                Json();
                ~Json();

                string toString() const;

                static unique_ptr<Json> parse( const string& json );
        };
    }
}

#endif
