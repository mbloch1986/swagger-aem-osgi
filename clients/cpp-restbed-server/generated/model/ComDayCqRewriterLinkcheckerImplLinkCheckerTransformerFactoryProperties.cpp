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



#include "ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties.h"

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

ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties()
{
    
}

ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::~ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties()
{
}

std::string ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::getLinkcheckertransformerDisableRewriting() const
{
    return m_Linkcheckertransformer_disableRewriting;
}
void ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::setLinkcheckertransformerDisableRewriting(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Linkcheckertransformer_disableRewriting = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::getLinkcheckertransformerDisableChecking() const
{
    return m_Linkcheckertransformer_disableChecking;
}
void ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::setLinkcheckertransformerDisableChecking(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Linkcheckertransformer_disableChecking = value;
}
std::shared_ptr<ConfigNodePropertyInteger> ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::getLinkcheckertransformerMapCacheSize() const
{
    return m_Linkcheckertransformer_mapCacheSize;
}
void ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::setLinkcheckertransformerMapCacheSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Linkcheckertransformer_mapCacheSize = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::getLinkcheckertransformerStrictExtensionCheck() const
{
    return m_Linkcheckertransformer_strictExtensionCheck;
}
void ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::setLinkcheckertransformerStrictExtensionCheck(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Linkcheckertransformer_strictExtensionCheck = value;
}
std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::getLinkcheckertransformerStripHtmltExtension() const
{
    return m_Linkcheckertransformer_stripHtmltExtension;
}
void ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::setLinkcheckertransformerStripHtmltExtension(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Linkcheckertransformer_stripHtmltExtension = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::getLinkcheckertransformerRewriteElements() const
{
    return m_Linkcheckertransformer_rewriteElements;
}
void ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::setLinkcheckertransformerRewriteElements(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Linkcheckertransformer_rewriteElements = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::getLinkcheckertransformerStripExtensionPathBlacklist() const
{
    return m_Linkcheckertransformer_stripExtensionPathBlacklist;
}
void ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties::setLinkcheckertransformerStripExtensionPathBlacklist(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Linkcheckertransformer_stripExtensionPathBlacklist = value;
}

}
}
}
}

