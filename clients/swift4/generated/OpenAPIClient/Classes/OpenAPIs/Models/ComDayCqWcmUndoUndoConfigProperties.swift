//
// ComDayCqWcmUndoUndoConfigProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqWcmUndoUndoConfigProperties: Codable {

    public var cqWcmUndoEnabled: ConfigNodePropertyBoolean?
    public var cqWcmUndoPath: ConfigNodePropertyString?
    public var cqWcmUndoValidity: ConfigNodePropertyInteger?
    public var cqWcmUndoSteps: ConfigNodePropertyInteger?
    public var cqWcmUndoPersistence: ConfigNodePropertyString?
    public var cqWcmUndoPersistenceMode: ConfigNodePropertyBoolean?
    public var cqWcmUndoMarkermode: ConfigNodePropertyString?
    public var cqWcmUndoWhitelist: ConfigNodePropertyArray?
    public var cqWcmUndoBlacklist: ConfigNodePropertyArray?

    public init(cqWcmUndoEnabled: ConfigNodePropertyBoolean?, cqWcmUndoPath: ConfigNodePropertyString?, cqWcmUndoValidity: ConfigNodePropertyInteger?, cqWcmUndoSteps: ConfigNodePropertyInteger?, cqWcmUndoPersistence: ConfigNodePropertyString?, cqWcmUndoPersistenceMode: ConfigNodePropertyBoolean?, cqWcmUndoMarkermode: ConfigNodePropertyString?, cqWcmUndoWhitelist: ConfigNodePropertyArray?, cqWcmUndoBlacklist: ConfigNodePropertyArray?) {
        self.cqWcmUndoEnabled = cqWcmUndoEnabled
        self.cqWcmUndoPath = cqWcmUndoPath
        self.cqWcmUndoValidity = cqWcmUndoValidity
        self.cqWcmUndoSteps = cqWcmUndoSteps
        self.cqWcmUndoPersistence = cqWcmUndoPersistence
        self.cqWcmUndoPersistenceMode = cqWcmUndoPersistenceMode
        self.cqWcmUndoMarkermode = cqWcmUndoMarkermode
        self.cqWcmUndoWhitelist = cqWcmUndoWhitelist
        self.cqWcmUndoBlacklist = cqWcmUndoBlacklist
    }

    public enum CodingKeys: String, CodingKey { 
        case cqWcmUndoEnabled = "cq.wcm.undo.enabled"
        case cqWcmUndoPath = "cq.wcm.undo.path"
        case cqWcmUndoValidity = "cq.wcm.undo.validity"
        case cqWcmUndoSteps = "cq.wcm.undo.steps"
        case cqWcmUndoPersistence = "cq.wcm.undo.persistence"
        case cqWcmUndoPersistenceMode = "cq.wcm.undo.persistence.mode"
        case cqWcmUndoMarkermode = "cq.wcm.undo.markermode"
        case cqWcmUndoWhitelist = "cq.wcm.undo.whitelist"
        case cqWcmUndoBlacklist = "cq.wcm.undo.blacklist"
    }


}
