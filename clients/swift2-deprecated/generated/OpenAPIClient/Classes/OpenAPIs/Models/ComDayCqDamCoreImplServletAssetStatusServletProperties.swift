//
// ComDayCqDamCoreImplServletAssetStatusServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqDamCoreImplServletAssetStatusServletProperties: JSONEncodable {
    public var cqDamBatchStatusMaxassets: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["cq.dam.batch.status.maxassets"] = self.cqDamBatchStatusMaxassets?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
