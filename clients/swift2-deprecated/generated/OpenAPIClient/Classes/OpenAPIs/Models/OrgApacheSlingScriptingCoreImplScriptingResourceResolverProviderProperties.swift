//
// OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties: JSONEncodable {
    public var logStacktraceOnclose: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["log.stacktrace.onclose"] = self.logStacktraceOnclose?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}