//
// ComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties: JSONEncodable {
    public var dimDefaultMode: ConfigNodePropertyDropDown?
    public var dimAppcacheEnabled: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["dim.default.mode"] = self.dimDefaultMode?.encodeToJSON()
        nillableDictionary["dim.appcache.enabled"] = self.dimAppcacheEnabled?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
