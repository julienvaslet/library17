#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include <iterator>

#include <log/log.h>
#include <data/json/Json.h>

using namespace std;
using namespace data::json;


int main( int argc, char ** argv )
{
    cout << "JSON classes validation test." << endl;

    string integerName { "integer" };
    int integerValue { 1 };

    string floatName { "float" };
    float floatValue { 1.2 };

    string stringName { "string" };
    string stringValue { "a word" };

    string booleanName { "boolean" };
    bool booleanValue { true };

    string arrayName { "array" };
    vector<int> arrayValue { 1, 2, 3, 4 };

    stringstream rawJson;
    rawJson << "{";
    rawJson << "\n\t";
    rawJson << "\"" << integerName << "\": " << integerValue;
    rawJson << ",\n\t";
    rawJson << "\"" << floatName << "\": " << floatValue;
    rawJson << ",\n\t";
    rawJson << "\"" << stringName << "\": " << stringValue;
    rawJson << ",\n\t";
    rawJson << "\"" << booleanName << "\": " << (booleanValue ? "true" : "false");
    rawJson << ",\n\t";
    rawJson << "\"" << arrayName << "\": [";
    copy( arrayValue.begin(), arrayValue.end(), ostream_iterator<int>( rawJson, "," ) );
    rawJson.seekp( -1, rawJson.cur );
    rawJson << "]";
    rawJson << "\n";
    rawJson << "}";

    INFO("Input data: " << endl << rawJson.str());

    auto json = Json::parse( rawJson.str() );

    if( json != nullptr )
    {
        INFO("Parsed data: ");
        INFO(json->toString());
    }
    else
        ERROR("Cannot parse Json data.");

    return 0;
}
