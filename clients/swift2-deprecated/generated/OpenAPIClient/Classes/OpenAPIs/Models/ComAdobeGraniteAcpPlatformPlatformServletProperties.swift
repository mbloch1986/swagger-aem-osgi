//
// ComAdobeGraniteAcpPlatformPlatformServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeGraniteAcpPlatformPlatformServletProperties: JSONEncodable {
    public var queryLimit: ConfigNodePropertyInteger?
    public var fileTypeExtensionMap: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["query.limit"] = self.queryLimit?.encodeToJSON()
        nillableDictionary["file.type.extension.map"] = self.fileTypeExtensionMap?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
