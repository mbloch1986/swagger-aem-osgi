//
// ComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties: JSONEncodable {
    public var cqDamScene7ConfigurationeventlistenerEnabled: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["cq.dam.scene7.configurationeventlistener.enabled"] = self.cqDamScene7ConfigurationeventlistenerEnabled?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}