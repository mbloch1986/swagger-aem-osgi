//
// ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties: JSONEncodable {
    public var binaryThreshold: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["binary.threshold"] = self.binaryThreshold?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
