//
// ComAdobeGraniteRestImplServletDefaultGETServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeGraniteRestImplServletDefaultGETServletProperties: JSONEncodable {

    public var defaultLimit: ConfigNodePropertyInteger?
    public var useAbsoluteUri: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["default.limit"] = self.defaultLimit?.encodeToJSON()
        nillableDictionary["use.absolute.uri"] = self.useAbsoluteUri?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
