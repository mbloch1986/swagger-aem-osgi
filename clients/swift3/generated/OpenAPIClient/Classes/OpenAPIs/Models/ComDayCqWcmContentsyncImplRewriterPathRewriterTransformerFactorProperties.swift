//
// ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties: JSONEncodable {

    public var cqContentsyncPathrewritertransformerMappingLinks: ConfigNodePropertyArray?
    public var cqContentsyncPathrewritertransformerMappingClientlibs: ConfigNodePropertyArray?
    public var cqContentsyncPathrewritertransformerMappingImages: ConfigNodePropertyArray?
    public var cqContentsyncPathrewritertransformerAttributePattern: ConfigNodePropertyString?
    public var cqContentsyncPathrewritertransformerClientlibraryPattern: ConfigNodePropertyString?
    public var cqContentsyncPathrewritertransformerClientlibraryReplace: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["cq.contentsync.pathrewritertransformer.mapping.links"] = self.cqContentsyncPathrewritertransformerMappingLinks?.encodeToJSON()
        nillableDictionary["cq.contentsync.pathrewritertransformer.mapping.clientlibs"] = self.cqContentsyncPathrewritertransformerMappingClientlibs?.encodeToJSON()
        nillableDictionary["cq.contentsync.pathrewritertransformer.mapping.images"] = self.cqContentsyncPathrewritertransformerMappingImages?.encodeToJSON()
        nillableDictionary["cq.contentsync.pathrewritertransformer.attribute.pattern"] = self.cqContentsyncPathrewritertransformerAttributePattern?.encodeToJSON()
        nillableDictionary["cq.contentsync.pathrewritertransformer.clientlibrary.pattern"] = self.cqContentsyncPathrewritertransformerClientlibraryPattern?.encodeToJSON()
        nillableDictionary["cq.contentsync.pathrewritertransformer.clientlibrary.replace"] = self.cqContentsyncPathrewritertransformerClientlibraryReplace?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
