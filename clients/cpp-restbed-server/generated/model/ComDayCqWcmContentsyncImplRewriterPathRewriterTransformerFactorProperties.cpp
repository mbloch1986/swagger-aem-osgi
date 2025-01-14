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



#include "ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties.h"

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

ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties::ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties()
{
    
}

ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties::~ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties()
{
}

std::string ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyArray> ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties::getCqContentsyncPathrewritertransformerMappingLinks() const
{
    return m_Cq_contentsync_pathrewritertransformer_mapping_links;
}
void ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties::setCqContentsyncPathrewritertransformerMappingLinks(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Cq_contentsync_pathrewritertransformer_mapping_links = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties::getCqContentsyncPathrewritertransformerMappingClientlibs() const
{
    return m_Cq_contentsync_pathrewritertransformer_mapping_clientlibs;
}
void ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties::setCqContentsyncPathrewritertransformerMappingClientlibs(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Cq_contentsync_pathrewritertransformer_mapping_clientlibs = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties::getCqContentsyncPathrewritertransformerMappingImages() const
{
    return m_Cq_contentsync_pathrewritertransformer_mapping_images;
}
void ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties::setCqContentsyncPathrewritertransformerMappingImages(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Cq_contentsync_pathrewritertransformer_mapping_images = value;
}
std::shared_ptr<ConfigNodePropertyString> ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties::getCqContentsyncPathrewritertransformerAttributePattern() const
{
    return m_Cq_contentsync_pathrewritertransformer_attribute_pattern;
}
void ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties::setCqContentsyncPathrewritertransformerAttributePattern(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Cq_contentsync_pathrewritertransformer_attribute_pattern = value;
}
std::shared_ptr<ConfigNodePropertyString> ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties::getCqContentsyncPathrewritertransformerClientlibraryPattern() const
{
    return m_Cq_contentsync_pathrewritertransformer_clientlibrary_pattern;
}
void ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties::setCqContentsyncPathrewritertransformerClientlibraryPattern(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Cq_contentsync_pathrewritertransformer_clientlibrary_pattern = value;
}
std::shared_ptr<ConfigNodePropertyString> ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties::getCqContentsyncPathrewritertransformerClientlibraryReplace() const
{
    return m_Cq_contentsync_pathrewritertransformer_clientlibrary_replace;
}
void ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties::setCqContentsyncPathrewritertransformerClientlibraryReplace(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Cq_contentsync_pathrewritertransformer_clientlibrary_replace = value;
}

}
}
}
}

