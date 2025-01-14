//
// ComDayCqDamCoreProcessMetadataProcessorProcessProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqDamCoreProcessMetadataProcessorProcessProperties: JSONEncodable {

    public var processLabel: ConfigNodePropertyString?
    public var cqDamEnableSha1: ConfigNodePropertyBoolean?
    public var cqDamMetadataXssprotectedProperties: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["process.label"] = self.processLabel?.encodeToJSON()
        nillableDictionary["cq.dam.enable.sha1"] = self.cqDamEnableSha1?.encodeToJSON()
        nillableDictionary["cq.dam.metadata.xssprotected.properties"] = self.cqDamMetadataXssprotectedProperties?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

