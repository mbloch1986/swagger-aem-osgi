//
// ComDayCqWcmFoundationImplPageImpressionsTrackerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqWcmFoundationImplPageImpressionsTrackerProperties: JSONEncodable {
    public var slingAuthRequirements: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["sling.auth.requirements"] = self.slingAuthRequirements?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
