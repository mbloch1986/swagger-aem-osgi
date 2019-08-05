package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlInfo._

case class ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlProperties])

object ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlInfo {
  import DateTimeCodecs._

  implicit val ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlInfoCodecJson: CodecJson[ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlInfo] = CodecJson.derive[ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlInfo]
  implicit val ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlInfoDecoder: EntityDecoder[ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlInfo] = jsonOf[ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlInfo]
  implicit val ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlInfoEncoder: EntityEncoder[ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlInfo] = jsonEncoderOf[ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleTagHandlInfo]
}