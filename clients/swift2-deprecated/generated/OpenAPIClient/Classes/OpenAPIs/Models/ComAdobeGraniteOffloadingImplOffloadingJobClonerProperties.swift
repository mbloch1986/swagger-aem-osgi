//
// ComAdobeGraniteOffloadingImplOffloadingJobClonerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeGraniteOffloadingImplOffloadingJobClonerProperties: JSONEncodable {
    public var offloadingJobclonerEnabled: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["offloading.jobcloner.enabled"] = self.offloadingJobclonerEnabled?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}