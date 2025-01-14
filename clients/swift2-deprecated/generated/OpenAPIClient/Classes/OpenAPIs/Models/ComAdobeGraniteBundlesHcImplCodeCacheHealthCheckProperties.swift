//
// ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties: JSONEncodable {
    public var hcTags: ConfigNodePropertyArray?
    public var minimumCodeCacheSize: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["hc.tags"] = self.hcTags?.encodeToJSON()
        nillableDictionary["minimum.code.cache.size"] = self.minimumCodeCacheSize?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
