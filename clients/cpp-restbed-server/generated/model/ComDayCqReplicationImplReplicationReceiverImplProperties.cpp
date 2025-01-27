/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ComDayCqReplicationImplReplicationReceiverImplProperties.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqReplicationImplReplicationReceiverImplProperties::ComDayCqReplicationImplReplicationReceiverImplProperties()
{
    
}

ComDayCqReplicationImplReplicationReceiverImplProperties::~ComDayCqReplicationImplReplicationReceiverImplProperties()
{
}

std::string ComDayCqReplicationImplReplicationReceiverImplProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComDayCqReplicationImplReplicationReceiverImplProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyInteger> ComDayCqReplicationImplReplicationReceiverImplProperties::getReceiverTmpfileThreshold() const
{
    return m_Receiver_tmpfile_threshold;
}
void ComDayCqReplicationImplReplicationReceiverImplProperties::setReceiverTmpfileThreshold(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Receiver_tmpfile_threshold = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqReplicationImplReplicationReceiverImplProperties::getReceiverPackagesUseInstall() const
{
    return m_Receiver_packages_use_install;
}
void ComDayCqReplicationImplReplicationReceiverImplProperties::setReceiverPackagesUseInstall(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Receiver_packages_use_install = value;
}

}
}
}
}

