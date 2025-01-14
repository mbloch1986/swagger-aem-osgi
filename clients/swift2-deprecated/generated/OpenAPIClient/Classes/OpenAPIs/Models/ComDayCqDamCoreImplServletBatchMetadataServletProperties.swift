//
// ComDayCqDamCoreImplServletBatchMetadataServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqDamCoreImplServletBatchMetadataServletProperties: JSONEncodable {
    public var cqDamBatchMetadataAssetDefault: ConfigNodePropertyArray?
    public var cqDamBatchMetadataCollectionDefault: ConfigNodePropertyArray?
    public var cqDamBatchMetadataMaxresources: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["cq.dam.batch.metadata.asset.default"] = self.cqDamBatchMetadataAssetDefault?.encodeToJSON()
        nillableDictionary["cq.dam.batch.metadata.collection.default"] = self.cqDamBatchMetadataCollectionDefault?.encodeToJSON()
        nillableDictionary["cq.dam.batch.metadata.maxresources"] = self.cqDamBatchMetadataMaxresources?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
