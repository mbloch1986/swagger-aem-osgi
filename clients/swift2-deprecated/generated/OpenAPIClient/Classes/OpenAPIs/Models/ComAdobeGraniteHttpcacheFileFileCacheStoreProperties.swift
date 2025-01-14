//
// ComAdobeGraniteHttpcacheFileFileCacheStoreProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeGraniteHttpcacheFileFileCacheStoreProperties: JSONEncodable {
    public var comAdobeGraniteHttpcacheFileDocumentRoot: ConfigNodePropertyString?
    public var comAdobeGraniteHttpcacheFileIncludeHost: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["com.adobe.granite.httpcache.file.documentRoot"] = self.comAdobeGraniteHttpcacheFileDocumentRoot?.encodeToJSON()
        nillableDictionary["com.adobe.granite.httpcache.file.includeHost"] = self.comAdobeGraniteHttpcacheFileIncludeHost?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
