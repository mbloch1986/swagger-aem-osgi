//
// OrgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties: JSONEncodable {
    public var extensions: ConfigNodePropertyArray?
    public var minDurationMs: ConfigNodePropertyInteger?
    public var maxDurationMs: ConfigNodePropertyInteger?
    public var compactLogFormat: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["extensions"] = self.extensions?.encodeToJSON()
        nillableDictionary["minDurationMs"] = self.minDurationMs?.encodeToJSON()
        nillableDictionary["maxDurationMs"] = self.maxDurationMs?.encodeToJSON()
        nillableDictionary["compactLogFormat"] = self.compactLogFormat?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
