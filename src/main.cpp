#include <Poco/Net/DNS.h>
#include <Poco/Net/HostEntry.h>
#include <Poco/Exception.h>
#include <iostream>

int main()
{
    try
    {
        Poco::Net::HostEntry entry = Poco::Net::DNS::hostByName("www.google.com");
        std::cout << "Addresses for www.google.com:\n";
        for (const auto &addr : entry.addresses())
        {
            std::cout << addr.toString() << "\n";
        }
    }
    catch (const Poco::Exception &ex)
    {
        std::cerr << "Error: " << ex.displayText() << "\n";
    }
    return 0;
}
