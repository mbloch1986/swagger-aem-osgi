//
// ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplProperties: JSONEncodable {
    public var cqDamDetectAssetMimeFromContent: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["cq.dam.detect.asset.mime.from.content"] = self.cqDamDetectAssetMimeFromContent?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}