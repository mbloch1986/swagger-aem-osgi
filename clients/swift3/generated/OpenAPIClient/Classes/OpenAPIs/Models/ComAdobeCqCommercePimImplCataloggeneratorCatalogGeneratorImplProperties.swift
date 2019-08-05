//
// ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeCqCommercePimImplCataloggeneratorCatalogGeneratorImplProperties: JSONEncodable {

    public var cqCommerceCataloggeneratorBucketsize: ConfigNodePropertyInteger?
    public var cqCommerceCataloggeneratorBucketname: ConfigNodePropertyString?
    public var cqCommerceCataloggeneratorExcludedtemplateproperties: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["cq.commerce.cataloggenerator.bucketsize"] = self.cqCommerceCataloggeneratorBucketsize?.encodeToJSON()
        nillableDictionary["cq.commerce.cataloggenerator.bucketname"] = self.cqCommerceCataloggeneratorBucketname?.encodeToJSON()
        nillableDictionary["cq.commerce.cataloggenerator.excludedtemplateproperties"] = self.cqCommerceCataloggeneratorExcludedtemplateproperties?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
