//
// ComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties: JSONEncodable {

    public var bucketSize: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["bucketSize"] = self.bucketSize?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
