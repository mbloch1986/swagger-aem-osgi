package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqWcmCoreImplEventPageEventAuditListenerInfo._

case class ComDayCqWcmCoreImplEventPageEventAuditListenerInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqWcmCoreImplEventPageEventAuditListenerProperties],
bundleLocation: Option[String],
serviceLocation: Option[String])

object ComDayCqWcmCoreImplEventPageEventAuditListenerInfo {
  import DateTimeCodecs._

  implicit val ComDayCqWcmCoreImplEventPageEventAuditListenerInfoCodecJson: CodecJson[ComDayCqWcmCoreImplEventPageEventAuditListenerInfo] = CodecJson.derive[ComDayCqWcmCoreImplEventPageEventAuditListenerInfo]
  implicit val ComDayCqWcmCoreImplEventPageEventAuditListenerInfoDecoder: EntityDecoder[ComDayCqWcmCoreImplEventPageEventAuditListenerInfo] = jsonOf[ComDayCqWcmCoreImplEventPageEventAuditListenerInfo]
  implicit val ComDayCqWcmCoreImplEventPageEventAuditListenerInfoEncoder: EntityEncoder[ComDayCqWcmCoreImplEventPageEventAuditListenerInfo] = jsonEncoderOf[ComDayCqWcmCoreImplEventPageEventAuditListenerInfo]
}