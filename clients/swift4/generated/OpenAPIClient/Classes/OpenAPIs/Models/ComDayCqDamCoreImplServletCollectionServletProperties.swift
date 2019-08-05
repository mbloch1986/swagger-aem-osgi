//
// ComDayCqDamCoreImplServletCollectionServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqDamCoreImplServletCollectionServletProperties: Codable {

    public var cqDamBatchCollectionProperties: ConfigNodePropertyArray?
    public var cqDamBatchCollectionMaxcollections: ConfigNodePropertyInteger?

    public init(cqDamBatchCollectionProperties: ConfigNodePropertyArray?, cqDamBatchCollectionMaxcollections: ConfigNodePropertyInteger?) {
        self.cqDamBatchCollectionProperties = cqDamBatchCollectionProperties
        self.cqDamBatchCollectionMaxcollections = cqDamBatchCollectionMaxcollections
    }

    public enum CodingKeys: String, CodingKey { 
        case cqDamBatchCollectionProperties = "cq.dam.batch.collection.properties"
        case cqDamBatchCollectionMaxcollections = "cq.dam.batch.collection.maxcollections"
    }


}
