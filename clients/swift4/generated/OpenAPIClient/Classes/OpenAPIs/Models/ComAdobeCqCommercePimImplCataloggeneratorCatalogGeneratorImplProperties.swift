//
// ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties: Codable {

    public var cqCommerceCataloggeneratorBucketsize: ConfigNodePropertyInteger?
    public var cqCommerceCataloggeneratorBucketname: ConfigNodePropertyString?
    public var cqCommerceCataloggeneratorExcludedtemplateproperties: ConfigNodePropertyArray?

    public init(cqCommerceCataloggeneratorBucketsize: ConfigNodePropertyInteger?, cqCommerceCataloggeneratorBucketname: ConfigNodePropertyString?, cqCommerceCataloggeneratorExcludedtemplateproperties: ConfigNodePropertyArray?) {
        self.cqCommerceCataloggeneratorBucketsize = cqCommerceCataloggeneratorBucketsize
        self.cqCommerceCataloggeneratorBucketname = cqCommerceCataloggeneratorBucketname
        self.cqCommerceCataloggeneratorExcludedtemplateproperties = cqCommerceCataloggeneratorExcludedtemplateproperties
    }

    public enum CodingKeys: String, CodingKey { 
        case cqCommerceCataloggeneratorBucketsize = "cq.commerce.cataloggenerator.bucketsize"
        case cqCommerceCataloggeneratorBucketname = "cq.commerce.cataloggenerator.bucketname"
        case cqCommerceCataloggeneratorExcludedtemplateproperties = "cq.commerce.cataloggenerator.excludedtemplateproperties"
    }


}
