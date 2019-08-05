//
// ComDayCqDamCoreImplUnzipUnzipConfigProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqDamCoreImplUnzipUnzipConfigProperties: JSONEncodable {

    public var cqDamConfigUnzipMaxuncompressedsize: ConfigNodePropertyInteger?
    public var cqDamConfigUnzipEncoding: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["cq.dam.config.unzip.maxuncompressedsize"] = self.cqDamConfigUnzipMaxuncompressedsize?.encodeToJSON()
        nillableDictionary["cq.dam.config.unzip.encoding"] = self.cqDamConfigUnzipEncoding?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
