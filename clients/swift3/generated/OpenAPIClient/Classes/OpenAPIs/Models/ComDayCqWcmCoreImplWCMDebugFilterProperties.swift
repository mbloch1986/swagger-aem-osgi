//
// ComDayCqWcmCoreImplWCMDebugFilterProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqWcmCoreImplWCMDebugFilterProperties: JSONEncodable {

    public var wcmdbgfilterEnabled: ConfigNodePropertyBoolean?
    public var wcmdbgfilterJspDebug: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["wcmdbgfilter.enabled"] = self.wcmdbgfilterEnabled?.encodeToJSON()
        nillableDictionary["wcmdbgfilter.jspDebug"] = self.wcmdbgfilterJspDebug?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

