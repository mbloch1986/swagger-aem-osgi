//
// ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties: JSONEncodable {

    public var brightedgeUrl: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["brightedge.url"] = self.brightedgeUrl?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

