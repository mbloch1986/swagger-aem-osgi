//
// ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties: JSONEncodable {

    public var redirectEnabled: ConfigNodePropertyBoolean?
    public var redirectStatsEnabled: ConfigNodePropertyBoolean?
    public var redirectExtensions: ConfigNodePropertyArray?
    public var redirectPaths: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["redirect.enabled"] = self.redirectEnabled?.encodeToJSON()
        nillableDictionary["redirect.stats.enabled"] = self.redirectStatsEnabled?.encodeToJSON()
        nillableDictionary["redirect.extensions"] = self.redirectExtensions?.encodeToJSON()
        nillableDictionary["redirect.paths"] = self.redirectPaths?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

