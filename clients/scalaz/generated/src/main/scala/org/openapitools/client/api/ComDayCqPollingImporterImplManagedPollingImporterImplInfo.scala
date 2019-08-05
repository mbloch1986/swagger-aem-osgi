package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqPollingImporterImplManagedPollingImporterImplInfo._

case class ComDayCqPollingImporterImplManagedPollingImporterImplInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqPollingImporterImplManagedPollingImporterImplProperties])

object ComDayCqPollingImporterImplManagedPollingImporterImplInfo {
  import DateTimeCodecs._

  implicit val ComDayCqPollingImporterImplManagedPollingImporterImplInfoCodecJson: CodecJson[ComDayCqPollingImporterImplManagedPollingImporterImplInfo] = CodecJson.derive[ComDayCqPollingImporterImplManagedPollingImporterImplInfo]
  implicit val ComDayCqPollingImporterImplManagedPollingImporterImplInfoDecoder: EntityDecoder[ComDayCqPollingImporterImplManagedPollingImporterImplInfo] = jsonOf[ComDayCqPollingImporterImplManagedPollingImporterImplInfo]
  implicit val ComDayCqPollingImporterImplManagedPollingImporterImplInfoEncoder: EntityEncoder[ComDayCqPollingImporterImplManagedPollingImporterImplInfo] = jsonEncoderOf[ComDayCqPollingImporterImplManagedPollingImporterImplInfo]
}