//
// ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfo.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfo: Codable {

    public var pid: String?
    public var title: String?
    public var _description: String?
    public var properties: ComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties?

    public init(pid: String?, title: String?, _description: String?, properties: ComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties?) {
        self.pid = pid
        self.title = title
        self._description = _description
        self.properties = properties
    }

    public enum CodingKeys: String, CodingKey { 
        case pid
        case title
        case _description = "description"
        case properties
    }


}
