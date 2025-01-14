//
// ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties: JSONEncodable {
    public var operation: ConfigNodePropertyString?
    public var emailEnabled: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["operation"] = self.operation?.encodeToJSON()
        nillableDictionary["emailEnabled"] = self.emailEnabled?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
