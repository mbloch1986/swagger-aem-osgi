//
// ComDayCqDamCoreImplDamChangeEventListenerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqDamCoreImplDamChangeEventListenerProperties: JSONEncodable {
    public var changeeventlistenerObservedPaths: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["changeeventlistener.observed.paths"] = self.changeeventlistenerObservedPaths?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
