//
// ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplProperties: JSONEncodable {

    public var cqDamDetectAssetMimeFromContent: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["cq.dam.detect.asset.mime.from.content"] = self.cqDamDetectAssetMimeFromContent?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

