//
// ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties: JSONEncodable {

    public var indexingCriticalThreshold: ConfigNodePropertyInteger?
    public var indexingWarnThreshold: ConfigNodePropertyInteger?
    public var hcTags: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["indexing.critical.threshold"] = self.indexingCriticalThreshold?.encodeToJSON()
        nillableDictionary["indexing.warn.threshold"] = self.indexingWarnThreshold?.encodeToJSON()
        nillableDictionary["hc.tags"] = self.hcTags?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
