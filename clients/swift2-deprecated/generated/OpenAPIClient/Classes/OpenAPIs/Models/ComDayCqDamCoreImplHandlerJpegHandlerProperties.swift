//
// ComDayCqDamCoreImplHandlerJpegHandlerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqDamCoreImplHandlerJpegHandlerProperties: JSONEncodable {
    public var cqDamEnableExtMetaExtraction: ConfigNodePropertyBoolean?
    public var largeFileThreshold: ConfigNodePropertyInteger?
    public var largeCommentThreshold: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["cq.dam.enable.ext.meta.extraction"] = self.cqDamEnableExtMetaExtraction?.encodeToJSON()
        nillableDictionary["large_file_threshold"] = self.largeFileThreshold?.encodeToJSON()
        nillableDictionary["large_comment_threshold"] = self.largeCommentThreshold?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
