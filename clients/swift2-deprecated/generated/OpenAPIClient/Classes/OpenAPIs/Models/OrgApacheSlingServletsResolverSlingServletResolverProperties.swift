//
// OrgApacheSlingServletsResolverSlingServletResolverProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheSlingServletsResolverSlingServletResolverProperties: JSONEncodable {
    public var servletresolverServletRoot: ConfigNodePropertyString?
    public var servletresolverCacheSize: ConfigNodePropertyInteger?
    public var servletresolverPaths: ConfigNodePropertyArray?
    public var servletresolverDefaultExtensions: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["servletresolver.servletRoot"] = self.servletresolverServletRoot?.encodeToJSON()
        nillableDictionary["servletresolver.cacheSize"] = self.servletresolverCacheSize?.encodeToJSON()
        nillableDictionary["servletresolver.paths"] = self.servletresolverPaths?.encodeToJSON()
        nillableDictionary["servletresolver.defaultExtensions"] = self.servletresolverDefaultExtensions?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
